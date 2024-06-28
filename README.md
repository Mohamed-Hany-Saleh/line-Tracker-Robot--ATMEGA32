
# Line Tracker Robot with ATMEGA32

## Project Overview
This project is an embedded systems application designed to control a line tracking robot using the ATMEGA32 microcontroller. The robot uses infrared (IR) sensors to detect lines and accordingly controls the motor driver to follow the path. The project employs a clean architecture approach, utilizing Common, HAL (Hardware Abstraction Layer), and MCAL (Microcontroller Abstraction Layer) drivers.

## File Structure
- **app.c**: Main application file.
- **DIO_Interface.h**: Digital Input/Output interface header file.
- **DIO_Private.h**: Digital Input/Output private header file.
- **DIO_Program.c**: Digital Input/Output program file.
- **DCMotor_Config.h**: DC Motor configuration header file.
- **DCMotor_Interface.h**: DC Motor interface header file.
- **DCMotor_Private.h**: DC Motor private header file.
- **DCMotor_Program.c**: DC Motor program file.
- **BIT_Math.h**: Bit manipulation utility header file.
- **Defination.h**: Common definitions header file.
- **STD_Types.h**: Standard data types header file.

## Getting Started
### Prerequisites
To compile and run this project, you will need:
- A C compiler (e.g., GCC)
- ATMEGA32 development board
- Infrared sensors
- Motor driver module

### Installation
1. Clone the repository:
    ```sh
    git clone https://github.com/yourusername/your-repo.git
    cd your-repo
    ```

2. Compile the code using your preferred method. For example, with GCC:
    ```sh
    gcc -o app app.c DIO_Program.c DCMotor_Program.c -I.
    ```

3. Upload the compiled program to your ATMEGA32 development board.

### Running the Application
1. Connect the IR sensors and motor driver to the development board according to your hardware specifications.
2. Power on the development board.
3. The robot will follow the line based on the input from the IR sensors.

### Code Overview
#### Initialization
The main function initializes the IR sensors, motor driver, and PWM:
```c
IR_Init();
MotorDriver_Init();
PWM_Init();
PWM_FAST_SetMode(1);
PWM_SetOCRValue(192);
```

#### Main Loop
The main loop continuously reads the IR sensors and controls the motor driver accordingly:
```c
while(1)
{
    if (IR_Read_LeftIR() == WHITE && IR_Read_middle() == BLACK && IR_Read_RightIR() == WHITE) {
        MotorDriver_MoveForward();
    }
    else if (IR_Read_LeftIR() == BLACK && IR_Read_middle() == WHITE && IR_Read_RightIR() == WHITE) {
        MotorDriver_MoveForwardLeft();
    }
    else if (IR_Read_LeftIR() == WHITE && IR_Read_middle() == WHITE && IR_Read_RightIR() == BLACK) {
        MotorDriver_MoveForwardRight();
    }
    else if (IR_Read_LeftIR() == BLACK && IR_Read_middle() == BLACK && IR_Read_RightIR() == BLACK) {
        MotorDriver_Stop();
    }
}
```

## Architecture
This project follows a clean architecture pattern, separating the code into different layers:
- **Common**: Contains common utility functions and definitions used across the project.
- **HAL (Hardware Abstraction Layer)**: Provides high-level interfaces for hardware components.
- **MCAL (Microcontroller Abstraction Layer)**: Contains low-level drivers for microcontroller peripherals.

## Contributing
Contributions are welcome! Please fork the repository and create a pull request with your changes. Ensure your code adheres to the existing style and includes proper documentation.

## Contact
Author: Mohamed Hany  
Email: ponjafonga12@gmail.com


