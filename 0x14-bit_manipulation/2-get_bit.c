#include "main.h"

/**
* get_bit - a function that returns the value of a bit at a given index.
* @n: bit number containing the bit to get
* @index: bit index, starting 0
* Return: bit value at index x, or -1 for error
*/
int get_bit(unsigned long int n, unsigned int index)
{
/*
* Check if the index is within the valid range of bit positions
*/
if (index >= sizeof(unsigned long int) * 8)
{
/*
* Return -1 to indicate an error
*/
return (-1);
}
/*
* Shift the bit we want to get to the least
* significant position and extract it
*/
return ((n >> index) & 1);
}

