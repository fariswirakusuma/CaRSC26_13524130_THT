#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"

#include <iostream>
#include <sstream>
#include <thread>

using namespace std::chrono_literals;

class Watch : public rclcpp::Node {
public:
    Watch() : Node("watch") {
        publisher_ = this->create_publisher<std_msgs::msg::Int32MultiArray>("watch_time", 10);
        RCLCPP_INFO(this->get_logger(), "Watch node started.");
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
            RCLCPP_INFO(this->get_logger(), "Watch sent: '%s'", line.c_str());
        }
    }

private:
    rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr publisher_;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Watch>();
    std::thread([&]() { node->run(); }).detach();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}
