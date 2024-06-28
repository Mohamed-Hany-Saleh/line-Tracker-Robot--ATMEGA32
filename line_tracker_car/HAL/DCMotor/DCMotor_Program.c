/*
 * DCMotor_Program.c
 *
 *  Created on: Sep 22, 2023
 *      Author: Mohaned Hany
 */

#include "DCMotor_Interface.h"


void MotorDriver_Init(void)
{
	// set directions and select pins for motor
	DIO_SetPinDir('A',0,1);
	DIO_SetPinDir('A',1,1);
	DIO_SetPinDir('A',2,1);
	DIO_SetPinDir('A',3,1);

}

void MotorDriver_MoveForward(void)
{
	// for motor in write side
	DIO_WritePin('A',0,1);
	DIO_WritePin('A',1,0);


	// for motor in write side
	DIO_WritePin('A',2,1);
	DIO_WritePin('A',3,0);




}


void MotorDriver_MoveBackward(void)
{
	// for motor in write side
	DIO_WritePin('A',0,0);
	DIO_WritePin('A',1,1);


	// for motor in write side
	DIO_WritePin('A',2,0);
	DIO_WritePin('A',3,1);

}


void MotorDriver_MoveForwardRight(void)
{
	// for motor in write side
	DIO_WritePin('A',0,0);
	DIO_WritePin('A',1,0);


	// for motor in write side
	DIO_WritePin('A',2,1);
	DIO_WritePin('A',3,0);

}

void MotorDriver_MoveForwardLeft(void)
{
	// for motor in write side
	DIO_WritePin('A',0,1);
	DIO_WritePin('A',1,0);


	// for motor in write side
	DIO_WritePin('A',2,0);
	DIO_WritePin('A',3,0);

}

void MotorDriver_MoveBackwardRight(void)
{

	// for motor in write side
		DIO_WritePin('A',0,0);
		DIO_WritePin('A',1,1);


		// for motor in write side
		DIO_WritePin('A',2,0);
		DIO_WritePin('A',3,0);
}
void MotorDriver_MoveBackwardLeft(void)
{

	// for motor in write side
		DIO_WritePin('A',0,0);
		DIO_WritePin('A',1,0);


		// for motor in write side
		DIO_WritePin('A',2,0);
		DIO_WritePin('A',3,1);
}


void MotorDriver_Stop(void)
{
	// for motor in write side
		DIO_WritePin('A',0,0);
		DIO_WritePin('A',1,0);


		// for motor in write side
		DIO_WritePin('A',2,0);
		DIO_WritePin('A',3,0);

		/*
		 * or
		 * 	// for motor in write side
		DIO_WritePin('A',0,1);
		DIO_WritePin('A',1,1);


		// for motor in write side
		DIO_WritePin('A',2,1);
		DIO_WritePin('A',3,1);
		 * */
}









void DCMotor_voidInit()
{
	DIO_voidSetPinDir(DCMotorGroup,DCMotorB1,Output);
	DIO_voidSetPinDir(DCMotorGroup,DCMotorB2,Output);
	DIO_voidSetPinDir(DCMotorGroup,DCMotorB3,Output);
	DIO_voidSetPinDir(DCMotorGroup,DCMotorB4,Output);
}

void DCMotor_voidOnMaxSpeed(u8 Dir)
{
	if (Dir==clock_wise)
	{
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB1,High);
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB4,High);
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB2,Low);
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB3,Low);
	}
	else if(Dir==anti_clock_wise)
	{
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB1,Low);
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB4,Low);
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB2,High);
		DIO_voidSetPinValue(DCMotorGroup,DCMotorB3,High);
	}
}

void DCMotor_voidOff()
{
	DIO_voidSetPinValue(DCMotorGroup,DCMotorB1,Low);
	DIO_voidSetPinValue(DCMotorGroup,DCMotorB4,Low);
	DIO_voidSetPinValue(DCMotorGroup,DCMotorB2,Low);
	DIO_voidSetPinValue(DCMotorGroup,DCMotorB3,Low);
}
