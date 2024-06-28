/*
 * DCMotor_Interface.h
 *
 *  Created on: Sep 22, 2023
 *      Author: Mohaned Hany
 */

#ifndef HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#define HAL_DCMOTOR_DCMOTOR_INTERFACE_H_
#include "DCMotor_Config.h"
#include "DCMotor_Private.h"

void MotorDriver_Init(void);

void MotorDriver_MoveForward(void);


void MotorDriver_MoveBackward(void);


void MotorDriver_MoveForwardRight(void);

void MotorDriver_MoveForwardLeft(void);


void MotorDriver_MoveBackwardRight(void);
void MotorDriver_MoveBackwardLeft(void);

void MotorDriver_Stop(void);
#endif /* HAL_DCMOTOR_DCMOTOR_INTERFACE_H_ */
