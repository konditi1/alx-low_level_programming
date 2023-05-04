#include "main.h"

/**
* print_binary - Prints the binary representation of a number.
*
* @n: The number to be printed in binary format.
*/
void print_binary(unsigned long int n)
{

unsigned long int mask;
int start_printing;
if (n == 0)
{
_putchar('0');
/*_putchar('\n');*/
return;
}
mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
start_printing = 0;

while (mask)
{
if (n & mask)
{
_putchar('1');
start_printing = 1;
}
else if (start_printing)
{
_putchar('0');
}
mask >>= 1;
}
}
