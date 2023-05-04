#include "main.h"

/**
* flip_bits - Returns number of bits that are different btwn two numbers.
*
* @n: The first number.
* @m: The second number.
*
* Return: The number of bits that are different between n and m.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int bit_diff = n ^ m;

/* Loop through each bit that is different between n and m */
while (bit_diff != 0)
{
/* Check if the rightmost bit is set to 1 */
if (bit_diff & 1)
count++;

/* Shift the bit_diff right by one position to check the next bit */
bit_diff >>= 1;
}

return (count);
}

