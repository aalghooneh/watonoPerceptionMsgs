#include "ros/ros.h"
#include "std_msgs/String.h"

void callback(const std_msgs::String::ConstPtr& msg);

int main(int argc, char **argv)
{
    // Initialize the ROS node.
    ros::init(argc, argv, "my_subscriber_node");
    ros::NodeHandle nh;

    // Create a subscriber object.
    ros::Subscriber sub = nh.subscribe("chatter", 1000, callback);

    // Spin to handle callbacks.
    ros::spin();

    return 0;
}

void callback(const std_msgs::String::ConstPtr& msg)
{
    ROS_INFO("I heard: [%s]", msg->data.c_str());
}
