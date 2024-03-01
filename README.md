# AutomaticStreetLightControlSystem-

This repository contains the source code and documentation for an Automatic Street Light Control System. The purpose of this project is to design and implement an intelligent system that automatically controls street lights based on the surrounding lighting conditions. 

In the Automatic Street Light Control System described in the repository, the Arduino microcontroller is used along with several sensors and actuators to control the street lights. The following sensors are used:

# Light Dependent Resistor (LDR):
An LDR is a light sensor that changes its resistance based on the ambient light level. It is used to detect the surrounding lighting conditions. When the surroundings become dark, the resistance of the LDR increases, indicating a need for the street lights to turn on.

# Infrared (IR) Sensor:
An IR sensor can be used to detect the presence of vehicles or pedestrians on the street. It helps in implementing an intelligent control system by adjusting the brightness of the street lights when movement is detected. For example, the lights can be set to dim when no activity is detected and brighten up when a vehicle or pedestrian is detected.

# Other sensors (optional):
Depending on the specific requirements of the project, additional sensors can be incorporated. For example, temperature and humidity sensors can be used to adjust the brightness based on weather conditions, or motion sensors can be added for detecting movement in specific areas.

Apart from the sensors, the system also utilizes LEDs (Light Emitting Diodes) as the street lights. LEDs are energy-efficient and can be easily controlled using the Arduino board.

Overall, the LDR is primarily responsible for detecting ambient light levels, while the IR sensor can be used for intelligent control based on movement. The Arduino board processes the sensor data and controls the LEDs accordingly to achieve automatic street light control.

# Features

Automatic On/Off: The system uses sensors to detect ambient lighting conditions and automatically turns on or off the street lights accordingly.
Intelligent Control: The control algorithm adjusts the brightness of the street lights based on the level of darkness in the surroundings, ensuring adequate illumination while minimizing energy wastage.
Time-based Scheduling: The system can be programmed to operate according to predefined time schedules. For example, the lights can be set to turn on at sunset and turn off at sunrise.

# Prerequisites

Before using the Automatic Street Light Control System, the following prerequisites should be met:
Microcontroller board (e.g., Arduino, Raspberry Pi) with appropriate sensors and actuators.
Development environment and toolchain set up for the chosen microcontroller.
Required libraries and dependendcies installed.

# Contributing

Contributions to this project are welcome. If you find any issues or have suggestions for improvements, please submit a pull request or open an issue in the repository.
