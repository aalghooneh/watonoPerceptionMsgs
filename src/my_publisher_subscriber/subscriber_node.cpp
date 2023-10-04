// subscriber_node.cpp
#include <ros/ros.h>
#include "my_publisher_subscriber/MyMessage.h"  // Include your custom message if needed

void callback(const my_publisher_subscriber::MyMessage::ConstPtr& msg) {
    // Your subscriber callback logic here
}

int main(int argc, char** argv) {
    ros::init(argc, argv, "my_subscriber");
    ros::NodeHandle nh;

    ros::Subscriber subscriber = nh.subscribe("my_topic", 10, callback);

    ros::spin();
    return 0;
}