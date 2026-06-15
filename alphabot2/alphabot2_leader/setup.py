import os
from glob import glob
from setuptools import setup

package_name = 'alphabot2_leader'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name), glob('launch/*_launch.py')),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Michele Rizzo',
    maintainer_email='m.rizzo006@studenti.unibs.it',
    description='ROS2 package for Waveshare AlphaBot2-Pi mobile robot platform',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'leader = alphabot2_leader.leader:main',
            'motion_driver = alphabot2_leader.motion_driver:main',
            'IR_obstacle_sensors = alphabot2_leader.IR_obstacle_sensors:main',
            'virtual_odometer = alphabot2_leader.virtual_odometer:main',
            'QR_detector = alphabot2_leader.QR_detector:main',
        ],
    },
)
