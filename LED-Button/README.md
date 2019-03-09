## LED and Button Exercises

This section demonstrates how to fiddle around with the on-board user LED and button. 

Nucleo has only one user LED (LD2). One can look at the pin schematic to confirm the same. Another way to determine the count is by looking at the Hardware Abstraction Layer (HAL) code provided by the vendor. In file *LED_Nucleo-F446RE.c*, macro LED_NUM is defined as 1.

led.c contains the code to initialize the LED and make it blink. Delay function is user defined and can be used to vary the time duration. LED_On() and LED_Off() are the HAL API's which are invoked to toggle the LED. 

Below GIF shows how the routine we wrote acts out. After flashing the code onto the board, RESET button needs to be pressed to start the execution.

![Toggling User LED](gif)



