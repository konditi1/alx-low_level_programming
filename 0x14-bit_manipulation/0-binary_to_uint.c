#include "main.h"
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointer to a string of 0 and 1 chars
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	 /* initialize the converted number */
	unsigned int num = 0;
	int i = 0;
 /* check for NULL pointer */
	if (b == NULL)
		return (0);
	/* iterate through each character of the binary string */
	while (b[i] != '\0')
	{
	/* if the character is a valid bit */
		if (b[i] == '0' || b[i] == '1')
		{
	 /* shift the converted number left by 1 bit */
			num <<= 1;
	/* add the value of the current bit to the converted number */
			num += b[i] - '0';
	/* move to the next bit */
			i++;
		}
	/* if the character is not a valid bit */
		else
		{
			return (0);
		}
	}

	return (num);
}


