- 32 bit system bus 
- can produce 2^32 different addresses. this is where perpherals are mapped to.
- it has 2 AHB lite interfaces and 1 APB interface.
- AHB1 bus is converted ro APB1 and APB2 bus using converters.
- High speed peripherals are connected to AHB bus (180 Mhz) and low speed peripherals are connected to APB bus (45 and 90 Mhz).
- HCLK is the operating frequency of AHB bus.



## Buses

I-bus
Used to fetch instruction codes from the memory range - 0x00000000 to 0x1FFFFFFC. Operations are performed over the 32-bit AHB-Lite bus.

D-bus
Used to access data from memory range - 0x00000000 to 0x1FFFFFFF. Operations are performed over the 32-bit AHB-Lite bus.

S-bus
Used to fetch data in peripherals or SRAM from address ranges - 0x20000000 to 0xDFFFFFFF and 0xE0100000 to 0xFFFFFFF. Can be used to fetch instructions as well but less efficient than I-bus. Not connected to Flash memory.

DMA Memory bus
Used to write data 

