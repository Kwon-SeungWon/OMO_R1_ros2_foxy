# CMake generated Testfile for 
# Source directory: /root/catkin_ws/src/ros2-seminar-examples/topic_service_action_rclcpp_example/test
# Build directory: /root/catkin_ws/build/topic_service_action_rclcpp_example/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(test_calculator "/usr/bin/python3" "-u" "/opt/ros/foxy/share/ament_cmake_test/cmake/run_test.py" "/root/catkin_ws/build/topic_service_action_rclcpp_example/test_results/topic_service_action_rclcpp_example/test_calculator.gtest.xml" "--package-name" "topic_service_action_rclcpp_example" "--output-file" "/root/catkin_ws/build/topic_service_action_rclcpp_example/ament_cmake_gtest/test_calculator.txt" "--command" "/root/catkin_ws/build/topic_service_action_rclcpp_example/test/test_calculator" "--gtest_output=xml:/root/catkin_ws/build/topic_service_action_rclcpp_example/test_results/topic_service_action_rclcpp_example/test_calculator.gtest.xml")
set_tests_properties(test_calculator PROPERTIES  LABELS "gtest" REQUIRED_FILES "/root/catkin_ws/build/topic_service_action_rclcpp_example/test/test_calculator" TIMEOUT "60" WORKING_DIRECTORY "/root/catkin_ws/build/topic_service_action_rclcpp_example/test" _BACKTRACE_TRIPLES "/opt/ros/foxy/share/ament_cmake_test/cmake/ament_add_test.cmake;118;add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/foxy/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/root/catkin_ws/src/ros2-seminar-examples/topic_service_action_rclcpp_example/test/CMakeLists.txt;1;ament_add_gtest;/root/catkin_ws/src/ros2-seminar-examples/topic_service_action_rclcpp_example/test/CMakeLists.txt;0;")
subdirs("../gtest")
