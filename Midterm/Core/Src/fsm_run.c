/*
 * fsm_run.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Panda
 */
#include "fsm_run.h"
#include "main.h"
#include "button.h"
#include "display7seg.h"
#include "timer.h"
enum ButtonState { BUTTON_RELEASED , BUTTON1_PRESSED, BUTTON2_PRESSED, BUTTON3_PRESSED,
BUTTON2_PRESSED_MORE_THAN_3_SECOND, BUTTON3_PRESSED_MORE_THAN_3_SECOND } ;
enum ButtonState buttonState = BUTTON_RELEASED ;
int counter = 0;
void fsm_simple_button_run ( void ) {
 switch ( buttonState ){
 	 case BUTTON_RELEASED :
 		 if( is_button_pressed (0) ) {
 			 buttonState = BUTTON1_PRESSED ;
 			 counter = 0;
 			 setTimer2(1000);
 		 }
 		 if( is_button_pressed (1) ) {
 		 	 buttonState = BUTTON2_PRESSED ;
 		 	 counter++;
 			 setTimer2(1000);
 		 }
 		 if( is_button_pressed (2) ) {
			 buttonState = BUTTON3_PRESSED ;
			 counter--;
 			 setTimer2(1000);
 		 }
 		 if(timer2_flag == 1){
			 if(timer1_flag == 1){
				 counter--;
				 display7SEG(counter);
				 if(counter == 0){
					 setTimer2(1000);
					 break;
				 }
				 setTimer1(100);
			 }
 		 }
 		 break ;
 	 case BUTTON1_PRESSED :
 		 if (! is_button_pressed (0) ) {
 			 buttonState = BUTTON_RELEASED ;
 		 }
 		 display7SEG(counter);
 		 break ;
 	 case BUTTON2_PRESSED:
 		 if (! is_button_pressed (1) ) {
			 buttonState = BUTTON_RELEASED ;
 		 }
 		 else {
			 if( is_button_pressed_3s (1) ) {
				 buttonState = BUTTON2_PRESSED_MORE_THAN_3_SECOND ;
				 setTimer2(1000);
			 }
		 }
 		 if(counter > 9){
 			 counter = 0;
 		 }
		 display7SEG(counter);
 		 break;
 	 case BUTTON3_PRESSED:
 		 if (! is_button_pressed (2) ) {
			 buttonState = BUTTON_RELEASED ;
 		 }
 		 else {
			 if( is_button_pressed_3s (2) ) {
				 buttonState = BUTTON3_PRESSED_MORE_THAN_3_SECOND ;
				 setTimer2(1000);
			 }
		 }
 		 if(counter < 0){
 			 counter = 9;
 		 }
 		 display7SEG(counter);
 	 	 break;
 	 case BUTTON2_PRESSED_MORE_THAN_3_SECOND :
 		 if (! is_button_pressed (1) ) {
 			 buttonState = BUTTON_RELEASED ;
 		 }
 		 if(is_button_pressed (1)){
			 if(timer1_flag == 1){
				 counter ++;
				 if(counter > 9){
					 counter = 0;
				 }
				 setTimer1(100);
		 		 display7SEG(counter);
			 }
	 		 display7SEG(counter);
 		 }
 		 break ;
	 case BUTTON3_PRESSED_MORE_THAN_3_SECOND :
		 if (! is_button_pressed (2) ) {
			 buttonState = BUTTON_RELEASED ;
		 }
 		 if(is_button_pressed (2)){
			 if(timer1_flag == 1){
				 counter --;
				 if(counter < 0){
					 counter = 9;
				 }
				 setTimer1(100);
		 		 display7SEG(counter);
			 }
	 		 display7SEG(counter);
 		 }
		 break ;
 }
}
