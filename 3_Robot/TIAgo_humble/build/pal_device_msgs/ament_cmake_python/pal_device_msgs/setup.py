from setuptools import find_packages
from setuptools import setup

setup(
    name='pal_device_msgs',
    version='2.0.0',
    packages=find_packages(
        include=('pal_device_msgs', 'pal_device_msgs.*')),
)
