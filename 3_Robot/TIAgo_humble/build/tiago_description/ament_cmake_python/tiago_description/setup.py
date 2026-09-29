from setuptools import find_packages
from setuptools import setup

setup(
    name='tiago_description',
    version='5.1.3',
    packages=find_packages(
        include=('tiago_description', 'tiago_description.*')),
)
