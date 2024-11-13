# Hand Gesture Controlled Robot

## Overview
This project demonstrates a robot controlled via hand gestures using an accelerometer and Arduino. By interpreting specific hand movements, the system directs the robot's actions.

## Features
- **Gesture-Based Control**: Utilizes an accelerometer to detect hand movements, enabling directional control of the robot.
- **Wireless Communication**: Employs RF modules to transmit control signals from the hand-held device to the robot.
- **Arduino Integration**: Leverages Arduino microcontrollers for processing sensor data and managing the robot's movements.

## Components
- **Arduino Boards**: Serve as the central processing units for both the transmitter and receiver modules.
- **Accelerometer**: Detects hand movements and converts them into electrical signals.
- **RF Transmitter and Receiver Modules**: Facilitate wireless communication between the hand-held controller and the robot.
- **Motor Driver**: Controls the motors based on signals received from the Arduino.
- **Chassis and Motors**: Form the physical structure and movement mechanism of the robot.

## Setup Instructions

1. **Assemble the Hardware**:
   - Connect the accelerometer to the Arduino on the transmitter side.
   - Set up the RF transmitter module with the Arduino.
   - On the robot side, connect the RF receiver module to another Arduino.
   - Interface the Arduino with the motor driver and motors.

2. **Upload the Code**:
   - Program the transmitter Arduino to read data from the accelerometer and send corresponding signals via the RF transmitter.
   - Program the receiver Arduino to interpret the received signals and control the motors accordingly.

3. **Power the Systems**:
   - Ensure both the transmitter and receiver setups are properly powered.

4. **Test the System**:
   - Perform initial tests to verify that hand movements correspond to the desired robot movements.

## Usage
- **Forward Movement**: Tilt hand forward.
- **Backward Movement**: Tilt hand backward.
- **Turn Left**: Tilt hand to the left.
- **Turn Right**: Tilt hand to the right.
- **Stop**: Keep hand level.

## Future Enhancements
- **Gesture Customization**: Implement customizable gestures for more complex controls.
- **Feedback Mechanism**: Incorporate haptic or visual feedback to confirm command reception.
- **Extended Range**: Enhance the communication range between the controller and the robot.
