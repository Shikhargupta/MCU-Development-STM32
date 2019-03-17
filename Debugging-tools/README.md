## Debugging tools and techniques

Keil environment provides several debugging tools to rectify our code in real time.

- We can add multiple breakpoints in the code to halt the execution wherever needed. This helps to analyze various registers and the info they hold at each step.

- Call stack feature is used to have a closer look at the function stack in a programs. This helps to narrow down where the code is breaking.

- Watch window is used to monitor various pointers and variables during runtime. It helps to analyze what value each variable holds or what memory location each pointer holds while execution.

- Memory window is used to see what is stored at a particular memory location. We can also modify the memory in debug mode.
Flash memory starts from - 0x0800 0000
SRAM starts from - 0x2000 0000


###Caveats

- function stack will consume SRAM only during runtime.
- constant data structures will consume flash memory.
- global variables will use SRAM apart from runtime.
- data is stored in little endian format in memory.

