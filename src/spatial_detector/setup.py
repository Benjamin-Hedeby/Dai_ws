from setuptools import find_packages, setup

package_name = 'spatial_detector'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Christian Dragkilde',
    maintainer_email='chrmoric@gmail.com.com',
    description='Split spatial detection: Pi publisher + desktop visualizer',
    license='Apache-2.0',
    entry_points={
        'console_scripts': [
            'spatial_publisher_node.py = spatial_detector.spatial_publisher_node:main',
            'spatial_visualizer_node.py = spatial_detector.spatial_visualizer_node:main',
            'spatial_overlay.py = spatial_detector.spatial_overlay:main',
        ],
    },
)

