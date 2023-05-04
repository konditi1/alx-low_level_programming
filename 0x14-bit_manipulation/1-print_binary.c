#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 *
 * @n: The number to be printed in binary format.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int leading_zeroes = 1;

	while (mask != 0)
	{
		if ((n & mask) != 0)
		{
			_putchar('1');
			leading_zeroes = 0;
		}
		else if (!leading_zeroes)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (leading_zeroes)
	{
		_putchar('0');
	}

	_putchar('\n');
}

