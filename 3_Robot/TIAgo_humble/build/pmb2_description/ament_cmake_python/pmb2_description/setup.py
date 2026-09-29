from setuptools import find_packages
from setuptools import setup

setup(
    name='pmb2_description',
    version='5.12.0',
    packages=find_packages(
        include=('pmb2_description', 'pmb2_description.*')),
)
