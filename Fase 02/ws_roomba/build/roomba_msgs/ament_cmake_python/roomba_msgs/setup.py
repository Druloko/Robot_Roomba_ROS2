from setuptools import find_packages
from setuptools import setup

setup(
    name='roomba_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('roomba_msgs', 'roomba_msgs.*')),
)
