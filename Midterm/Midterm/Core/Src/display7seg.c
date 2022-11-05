/*
 * display7seg.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Panda
 */
#include "main.h"
#include "display7seg.h"
void display7SEG(int num){
	  switch(num){
	  case 0:
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_RESET);
		  break;
	  case 1:
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, 1);
	      break;
	  case 2:
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_RESET);
	      break;
	  case 3:
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, 1);
	      break;
	  case 4:
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, 1);
	      break;
	  case 5:
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, 1);
	      break;
	  case 6:
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
	      break;
	  case 7:
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, 1);
	      break;
	  case 8:
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
	      break;
	  case 9:
		  HAL_GPIO_WritePin(GPIOB, LED_0_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_1_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_2_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_3_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_4_Pin, 1);
		  HAL_GPIO_WritePin(GPIOB, LED_5_Pin, GPIO_PIN_RESET);
		  HAL_GPIO_WritePin(GPIOB, LED_6_Pin, GPIO_PIN_RESET);
	      break;
	  }
}


