##################################################################_Importations_###################################################################
import rclpy #bibliotheque python pour ROS2
from rclpy.node import Node


#########################################_Classes_#################################################################################################
#Cette classe est un noeud ROS2 qui publie sa position
"""
class Avance(Node):

#####################################_Méthodes_####################################################################################################
    #constructeur
    def __init__(self):
        super().__init__('robot_avance')

        self.publisher_ = self.create_publisher(Twist,'/cmd_vel',10) #cree un publisher qui publie des messages de type Twist sur le topic /cmd_vel avec une queue de 10 messages
        timer_period=0.1 #10 Hz la frequence a laquelle le robot publiera les commandes de mouvement
        self.timer=self.create_timer(timer_period, self.move_robot) #cree un timer qui appelle la méthode move_robot toutes les 0.1 secondes
    
    #cette méthode move_robot est appelée toutes  les 0.1sec par le timer et publie les vitesses
    def move_robot(self):
        msg=Twist() #cree un message de type Twist pour stocker les commandes de mouvement
        msg.linear.x  =0.3 #v
        msg.angular.z =0.0 #w
    
        self.publisher_.publish(msg) 
        self.get_logger().info("Le robot avance avec une vitesse linéaire de"+str(msg.linear.x)+" et une vitesse angulaire de "+str(msg.angular.z)) 

#le main est la fonction d'entrée du programme qui initialise ROS2, crée une instance de la classe Avance, et fait tourner le noeud jusqu'à ce qu'il soit arrêté
def main(args=None):
    rclpy.init(args=args) #initialise ROS2
    node =Avance() #cree une instance de la classe Avance qui est un noeud ROS2
    rclpy.spin(node)#fait tourner le noeud jusqu'à ce qu'il soit arrêté
    node.destroy_node() #detruit le noeud 
    rclpy.shutdown() #arrete ROS2

if __name__ == '__main__':
    main()
    """