/*Include the necessary libraries*/
#include "Board_LED.h"
#include "Board_Buttons.h"

/*Function to create delay between ON/OFF states of LED*/
void delay_func (void)
{
	int i=0;
	for (i=0; i<500000; i++);
}	

int main (void)
{
	while (1) {
		Buttons_Initialize ();
		if (Buttons_GetState ()) {
			LED_Initialize ();
	    LED_On (0);          /*Turn on LED no. 0*/
	    delay_func ();
	    LED_Off (0);         /*Turn on LED no. 0*/
		  delay_func ();
		}
	}	
}
