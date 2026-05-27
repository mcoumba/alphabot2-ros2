import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class MoveForward(Node):

    def __init__(self):
        super().__init__('move_forward')

        self.publisher_ = self.create_publisher(
            Twist,
            '/cmd_vel',
            10
        )

        timer_period = 0.1
        self.timer = self.create_timer(timer_period, self.move_robot)

    def move_robot(self):

        msg = Twist()

        # avancer tout droit
        msg.linear.x = 0.0

        # pas de rotation
        msg.angular.z = 0.5
    

        self.publisher_.publish(msg)

        self.get_logger().info('Le robot avance...')

def main(args=None):

    rclpy.init(args=args)

    node = MoveForward()

    rclpy.spin(node)

    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()