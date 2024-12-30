import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/mnt/c/Users/Druloko/Documents/ros2_dev_ws/install/roomba_control'
