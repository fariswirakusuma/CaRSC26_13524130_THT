#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"
#include "yapping/srv/duration.hpp"

#include <chrono>
#include <iostream>
#include <sstream>
#include <iomanip>
#include <ctime>
#include <thread>

using namespace std::chrono_literals;

class Clock : public rclcpp::Node {
public:
    Clock() : Node("clock") {
        publisher_ = this->create_publisher<std_msgs::msg::Int32MultiArray>("time", 10);

        duration_service_ = this->create_service<yapping::srv::Duration>(
            "duration",
            std::bind(&Clock::handle_duration, this,
                      std::placeholders::_1, std::placeholders::_2)
        );

        RCLCPP_INFO(this->get_logger(), "Clock node started.");
    }

    void run() {
        std::string line;
        while (rclcpp::ok()) {
            std::getline(std::cin, line);
            if (line == "exit") break;

            std::stringstream ss(line);
            int v;
            std_msgs::msg::Int32MultiArray msg;
            while (ss >> v)
                msg.data.push_back(v);

            publisher_->publish(msg);
            RCLCPP_INFO(this->get_logger(), "Sent: '%s'", line.c_str());
        }
    }

private:
    void handle_duration(
        const std::shared_ptr<yapping::srv::Duration::Request> request,
        std::shared_ptr<yapping::srv::Duration::Response> response
    ) {
        try {
            std::tm tm_start = {}, tm_end = {};
            std::istringstream ss_start(request->start_time);
            std::istringstream ss_end(request->end_time);

            ss_start >> std::get_time(&tm_start, "%Y-%m-%dT%H:%M:%S");
            ss_end >> std::get_time(&tm_end, "%Y-%m-%dT%H:%M:%S");

            auto time_start = std::mktime(&tm_start);
            auto time_end   = std::mktime(&tm_end);

            if (time_start > time_end)
                throw std::runtime_error("start_time is after end_time");

            auto diff = std::difftime(time_end, time_start);
            int hours = diff / 3600;
            int minutes = ((int)diff % 3600) / 60;
            int seconds = (int)diff % 60;

            std::ostringstream iso;
            iso << "PT" << hours << "H" << minutes << "M" << seconds << "S";

            response->iso_duration = iso.str();
            RCLCPP_INFO(this->get_logger(), "Duration: %s", iso.str().c_str());

        } catch (const std::exception &e) {
            response->iso_duration = e.what();
            RCLCPP_ERROR(this->get_logger(), "Error computing duration: %s", e.what());
        }
    }

    rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr publisher_;
    rclcpp::Service<yapping::srv::Duration>::SharedPtr duration_service_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Clock>();
    std::thread([&]() { node->run(); }).detach();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
