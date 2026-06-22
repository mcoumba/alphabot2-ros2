from setuptools import find_packages
from setuptools import setup

setup(
    name='alphabot2_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('alphabot2_interfaces', 'alphabot2_interfaces.*')),
)
