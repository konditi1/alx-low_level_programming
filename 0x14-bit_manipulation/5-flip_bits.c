#include "main.h"

/**
* flip_bits - a function that returns the number of bits you would
* need to flip to get from one number to another.
* @n: The first integer.
* @m: The second integer.
* Return: The number of bits.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int different_bits;
unsigned int counter;

different_bits = n ^ m;
counter = 0;

while (different_bits != 0)
{
counter += different_bits & 1;
different_bits >>= 1;
}
return (counter);
}
