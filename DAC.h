/*
Developer Name: Christopher Short, Ryan Iglesias
Class: EE 329 Microcontroller-Based Systems Design
Professor: John Penvenne
Assignment: A5-DAC
Date: 09/29/2022
Overview: This code declares the DAC functions and #define's used in main.c. The operation of each
function is described in DAC.c.
 */
#ifndef INC_DAC_H_
#define INC_DAC_H_

/*Define Max Voltage output for the DAC and the
4 most-significant-bits to configure the DAC as needed for
this application. Refer to the MCP4921 data sheet for clarification. */
#define MAX_VOLTAGE 4094
#define DAC_CONFIG 0x3000

//Declare DAC functions
void DAC_Init(void);
void DAC_Write(uint32_t DAC_Vo_Data);
uint32_t DAC_Voltage_Conversion(uint32_t inputVoltage);
void Delay(void);



#endif /* INC_DAC_H_ */
