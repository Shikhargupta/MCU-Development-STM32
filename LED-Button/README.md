## LED and Button Exercises

This section demonstrates how to fiddle around with the on-board user LED and button. 

Nucleo has only one user LED (LD2). One can look at the ![pin schematic](/Resources/STM32-Nucleo-64-pins-schematics.pdf) to confirm the same. Another way to determine the count is by looking at the Hardware Abstraction Layer (HAL) code provided by the vendor. In file **LED_Nucleo-F446RE.c**, macro LED_NUM is defined as 1.

![led.c](led.c) contains the code to initialize the LED and make it blink. Delay function is user defined and can be used to vary the time duration. LED_On() and LED_Off() are the HAL API's which are invoked to toggle the LED. 

Below GIF shows how the routine we wrote acts out. After flashing the code onto the board, RESET button needs to be pressed to start the execution.

<p align="center">
  <img src="led_gif.gif" width="400"/>
</p>


There are two button on Nucleo board - RESET and USER. The one which we can use for our experiments is USER button. A close look at the ![schematics](/Resources/STM32-Nucleo-64-pins-schematics.pdf) shows that effect of the button's state is reflected on PC13 GPIO. When it is not pressed, the port is driven to VDD. When the button is pressed, port is grounded. This is how the HAL API **Buttons_GetState ()** determines whether the button is pressed or not.

In our experiment we continuously check for the state of the button. If it is pressed, we call the above routine to blink the user LED.


<p align="center">
  <img src="button_gif.gif" width="400"/>
</p>