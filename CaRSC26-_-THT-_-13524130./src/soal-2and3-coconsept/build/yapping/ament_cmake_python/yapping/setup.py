from setuptools import find_packages
from setuptools import setup

setup(
    name='yapping',
    version='0.0.1',
    packages=find_packages(
        include=('yapping', 'yapping.*')),
)
