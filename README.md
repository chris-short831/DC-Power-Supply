This program takes in 3-digit inputs which represent a desired
voltage output from a 3x4 keypad, converts this value to the appropriate
digital voltage, and sends this value to the MCP4921 Digital-Analog-Converter
in order to output the originally intended voltage level.The DAC's VDD is tied
to 3.3V on the STM32L4A6, which means this is the maximum output voltage of the DAC.
The output voltage of the DAC is accurate within +/- 1 mV.
