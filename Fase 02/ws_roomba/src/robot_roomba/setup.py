from setuptools import find_packages, setup

package_name = 'robot_roomba'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(include=['robot_roomba', 'robot_roomba.*']),
    data_files=[
        ('share/ament_index/resource_index/packages', ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', ['launch/communication.launch.py',
                                               'launch/sim_and_comm.launch.py']),
        ('share/' + package_name + '/simulator', ['simulator/simulador_roomba.py']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Pedro Manuel Miranda Almendro', 
    maintainer_email='mirandaalmendro@gmail.com',
    description='Roomba robot interface package',
    license='Apache License 2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'communication_node = robot_roomba.communication_node:main'
        ],
    },
)
