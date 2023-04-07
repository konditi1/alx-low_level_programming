#include "main.h"
/**
* print_binary - a function which prints the binary representation of a number
* @n: the nth number of  print
*
* Return: 0
*/
void print_binary(unsigned long int n)
{
/*start by checking if the number > 1*/
	if (n > 1)

/* recursive call to the function with n shifted right */
		print_binary(n >> 1);

/* list significant bit of n is printed */
	_putchar((n & 1) + '0');
}

