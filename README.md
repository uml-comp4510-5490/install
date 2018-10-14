# Robot Simulators for vLabs

### **Use**
```
cd catkin_ws
git clone https://github.com/uml-comp4510-5490/install.git
source install/setup.bash
```

Once this is done, you should be able to run any of the following simulated robots:

- pr2
- ur5
- ur10
- sawyer


**Example**
- Open two terminals
- In both, run:
```
cd catkin_ws
source install/setup.bash
```

Then in the first, run
```
roslaunch gazebo_ros empty_world.launch
```

And in the second:
```
roslaunch pr2_gazebo pr2.launch
```

