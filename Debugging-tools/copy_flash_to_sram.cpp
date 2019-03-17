#include <stdint.h>

char const flash_data[] = "Nucleo F446RE";

#define SRAM_BASE_ADDRESS (uint8_t*)0x20000000    /*Adding data byte by byte*/

int main(void)
{
	for (int i=0 ; i < sizeof(flash_data) ; i++)
	{
		*(SRAM_BASE_ADDRESS + i) = flash_data[i];
	}
	return 0;
}
