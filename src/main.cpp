#include <rclcpp/rclcpp.hpp>

#include <chrono>
#include <thread>

int main(int argc, char** argv) {
  rclcpp::init(argc, argv);
  auto node = rclcpp::Node::make_unique("log_test");
  auto start = std::chrono::steady_clock::now();
  for (int i = 1; i <= 50; ++i) {
    RCLCPP_INFO_STREAM(node->get_logger(), "Message " << i << " / 50");
    std::this_thread::sleep_for(std::chrono::milliseconds(10));
  }

  std::cerr << "Total time: " << std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start).count() << "ms\n";
}
