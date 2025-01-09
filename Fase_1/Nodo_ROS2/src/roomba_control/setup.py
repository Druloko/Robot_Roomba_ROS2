import os 
from setuptools import setup
from glob import glob

package_name = 'roomba_control'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob('launch/*.py')),  # Añade esta línea
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='druloko',
    maintainer_email='druloko@todo.todo',
    description='Control del robot Roomba usando ROS 2',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'roomba_node = roomba_control.Roomba_Ros2_Node:main',
        ],
    },
)
