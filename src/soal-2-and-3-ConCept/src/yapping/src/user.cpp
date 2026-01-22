#include "rclcpp/rclcpp.hpp"
#include "yapping/srv/duration.hpp"

#include <chrono>
#include <iostream>
#include <memory>
#include <string>

using namespace std::chrono_literals;

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("user");

    auto client = node->create_client<yapping::srv::Duration>("duration");

    while (!client->wait_for_service(1s)) {
        RCLCPP_INFO(node->get_logger(), "Waiting for service...");
    }

    std::string start_time, end_time;
    std::cout << "Enter start_time (YYYY-MM-DDTHH:MM:SS): ";
    std::getline(std::cin, start_time);
    std::cout << "Enter end_time (YYYY-MM-DDTHH:MM:SS): ";
    std::getline(std::cin, end_time);

    auto request = std::make_shared<yapping::srv::Duration::Request>();
    request->start_time = start_time;
    request->end_time = end_time;

    auto result_future = client->async_send_request(request);

    if (rclcpp::spin_until_future_complete(node, result_future) ==
        rclcpp::FutureReturnCode::SUCCESS) {
        RCLCPP_INFO(node->get_logger(), "Duration from service: %s",
                    result_future.get()->iso_duration.c_str());
    } else {
        RCLCPP_ERROR(node->get_logger(), "Failed to call service duration");
    }

    rclcpp::shutdown();
    return 0;
}
