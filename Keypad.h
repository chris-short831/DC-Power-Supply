/*
Developer Name: Christopher Short
Class: EE 329 Microcontroller-Based Systems Design
Professor: John Penvenne
Assignment: A2-Keypad
Date: 09/29/2022
Overview: This code declares the functions used in keypad.c. The operation of each
function is described therein.
 */

/************************************************************************/
#ifndef INC_KEYPAD_H_
#define INC_KEYPAD_H_

//Define macros for GPIO registers used in Keypad functions
#define rowODR GPIOD
#define columnIDR GPIOB

//Declare Keypad Functions
void keypadPinInit(void);
uint32_t getKey(void);
uint32_t keyPress(void);






#endif /* INC_KEYPAD_H_ */
