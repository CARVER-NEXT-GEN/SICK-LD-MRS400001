# SICK-LD-MRS400001-3D-LiDAR

The SICK LD-MRS400001 is a versatile 3D LiDAR sensor designed for outdoor applications, offering a wide field of view and multiple scan layers for comprehensive environmental mapping. It is commonly utilized in autonomous vehicles, robotics, and industrial automation for tasks such as object detection, collision avoidance, and navigation.

Key Features:

- **Field of View:** The sensor provides a horizontal aperture angle of 85°, which can be extended to 110° using two additional scan layers, and a vertical aperture angle of 3.2°. 

- **Working Range:** It operates effectively within a range of 0.5 meters to 320 meters, accommodating various application needs. 

- **Scan Layers:** Equipped with four scan layers, the LD-MRS400001 enhances spatial resolution and object detection capabilities. 

- **Echo Evaluation:** The sensor evaluates up to three echoes per pulse, improving detection reliability in challenging environmental conditions. 

![alt text](https://cdn.sick.com/media/pim/3/33/633/IM0056633.png?im=Resize,width=1020)

## Step 1 Configure lidar IP using the SOPAS Engineering Tool.

You must locate the Lidar IP address using the SOPAS Engineering Tool, which is only available for **Windows**. You can obtain the tool from the link provided below.

[Download SOPAS Engineering Tool]

[Download SOPAS Engineering Tool]: https://www.sick.com/th/en/catalog/products/digital-services-and-software/software/sopas-engineering-tool/p/p367244?tab=downloads

Complete the installation of the application, then launch it and connect it to your PC using LAN Ethernet and **9-27V**.

**Add a Device in SOPAS Engineering Tool:**

To scan for linked devices, click the Search icon next to it. Then right-click to add a device.

![alt text](images/step1.png)

**Change IP-address:**

To configure the IP address of Lidar for the first time, right-click on the box and select "Change IP-address". 

![alt text](images/ChangeIp.png)

Next, select "automatic" to allow SOPAS to generate the correct IP address for Lidar. If you wish to generate your own IP address, ensure that your IP address, subnetmask, and gateway are in alignment. Subsequently, click "OK."

![alt text](images/OK.png)

Next, disconnect the device, re-plug it, and complete

### Optional: Visual Point Cloud on SOPAS

Click on the "Login" button, then select "Maintenance" Enter the password "main." If you desire an alternative mode, please refer to the image below.

![alt text](images/pass.png)
![alt text](images/login.png)

Click on the "open device windows" option in the kabab menu.

![alt text](images/opennew.png)

Then, double-click on the Field Evaluation Monitor. After that, click on the tool with a circle symbol surrounding it until you find the points cloud.

![alt text](images/SICK.png)

## Step 2: Setup Lidar in ROS2 (Ubuntu)

### Clone

~~~bash
git clone https://github.com/CARVER-NEXT-GEN/SICK-LD-MRS400001.git
~~~

###  Compile

**Change Directory**

```bash
cd SICK-LD-MRS400001-3D-LiDAR/sick_scan_ws/
```

**Step by Step**

~~~bash
colcon build --packages-select libsick_ldmrs --event-handlers console_direct+
source install/setup.bash
colcon build --packages-select sick_scan_xd --cmake-args " -DROS_VERSION=2" " -DLDMRS=0" " -DRASPBERRY=0" --event-handlers console_direct+
source install/setup.bash
colcon build
source install/setup.bash
~~~

**Or 1 command**

~~~bash
colcon build --packages-select libsick_ldmrs --event-handlers console_direct+ && source install/setup.bash && colcon build --packages-select sick_scan_xd --cmake-args " -DROS_VERSION=2" " -DLDMRS=0" " -DRASPBERRY=0" --event-handlers console_direct+ && source install/setup.bash && colcon build && source install/setup.bash
~~~

### Run

**Ensure that you have configured Ethernet correctly.**
![alt text](images/details.png)
![alt text](images/ipv4.png)
![alt text](images/ipv6.png)


**Initialize Lidar:** In Terminal 1

~~~bash
source ~/sick_scan_ws/install/setup.bash
ros2 launch sick_scan_xd sick_ldmrs.launch.py hostname:=169.254.23.98 port:=2111
~~~

You can change ```hostname:=``` to match SOPAS settings you have set up previously.

**Open RVIZ:** In Terminal 2

~~~bash
source ~/sick_scan_ws/install/setup.bash
ros2 run rviz2 rviz2 -d ~/sick_scan_ws/src/sick_scan_xd/launch/rviz/sick_ldmrs.rviz
~~~
![alt text](images/terminal.png)
![alt text](images/rviz.png)

## Other ways

You can also use the following links to fix or set parameters.

- [sick_scan_xd](https://github.com/SICKAG/sick_scan_xd?tab=readme-ov-file)
- [LD-MRS400001](https://www.sick.com/us/en/catalog/products/lidar-and-radar-sensors/lidar-sensors/ld-mrs/ld-mrs400001/p/p112355?tab=detail)
