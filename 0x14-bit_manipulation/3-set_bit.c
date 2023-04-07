#include "main.h"
/*
* set_bit- a function that sets the value of a bit to 1 at a given index.
* @n: the index
* @index: is the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/

int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int mask;
if (index >= sizeof(unsigned long int) * 8)
{
/*
* The index is out of range
*/
return (-1);
}
/*
* Calculate a bit mask with a 1 at the given index
*/
mask = 1UL << index;
/*
* Use the bitwise OR operator to set the bit to 1
*/
*n = *n | mask;
return (1);
}

