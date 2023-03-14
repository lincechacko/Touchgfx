/*
 * MyButtonController.cpp
 *
 *  Created on: Mar 13, 2023
 *      Author: lince
 */

#include <MyButtonController.hpp>
#include <main.h>
#include <touchgfx/hal/HAL.hpp>

void MyButtonController::init()
{
	previousState=0xFF;
}

bool MyButtonController::sample(uint8_t &key)
{
	if(HAL_GPIO_ReadPin(GPIOA,GPIO_PIN_0)==GPIO_PIN_SET)
	{
		if(previousState==0xFF)
		{
			previousState=0x00;
			key=0;
			return true;
		}
		return false;
	}
	previousState=0xFF;
	return false;
}


