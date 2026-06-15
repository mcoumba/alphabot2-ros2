#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from nav_msgs.msg import Odometry
from geometry_msgs.msg import Twist
import math


class LeaderFollower(Node):
    def __init__(self):
        super().__init__('leader_follower_node')

        self.leader_pose = None
        self.follower_pose = None

        self.sub_leader = self.create_subscription(
            Odometry,
            '/barista_1/odom',
            self.leader_callback,
            10
        )

        self.sub_follower = self.create_subscription(
            Odometry,
            '/barista_2/odom',
            self.follower_callback,
            10
        )

        self.pub_cmd = self.create_publisher(
            Twist,
            '/barista_2/cmd_vel',
            10
        )

        self.timer = self.create_timer(0.1, self.control_loop)

        self.distance_desiree = 1.0
        self.k_v = 0.5
        self.k_w = 1.5

    def leader_callback(self, msg):
        self.leader_pose = msg.pose.pose

    def follower_callback(self, msg):
        self.follower_pose = msg.pose.pose

    def get_yaw(self, orientation):
        qx = orientation.x
        qy = orientation.y
        qz = orientation.z
        qw = orientation.w

        siny_cosp = 2 * (qw * qz + qx * qy)
        cosy_cosp = 1 - 2 * (qy * qy + qz * qz)

        return math.atan2(siny_cosp, cosy_cosp)

    def normalize_angle(self, angle):
        while angle > math.pi:
            angle -= 2 * math.pi
        while angle < -math.pi:
            angle += 2 * math.pi
        return angle

    def control_loop(self):
        if self.leader_pose is None or self.follower_pose is None:
            return

        xL = self.leader_pose.position.x
        yL = self.leader_pose.position.y

        xF = self.follower_pose.position.x
        yF = self.follower_pose.position.y
        thetaF = self.get_yaw(self.follower_pose.orientation)

        dx = xL - xF
        dy = yL - yF

        distance = math.sqrt(dx**2 + dy**2)
        angle_to_leader = math.atan2(dy, dx)

        erreur_angle = self.normalize_angle(angle_to_leader - thetaF)
        erreur_distance = distance - self.distance_desiree

        cmd = Twist()

        if distance > self.distance_desiree:
            cmd.linear.x = self.k_v * erreur_distance
            cmd.angular.z = self.k_w * erreur_angle
        else:
            cmd.linear.x = 0.0
            cmd.angular.z = 0.0

        self.pub_cmd.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = LeaderFollower()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()