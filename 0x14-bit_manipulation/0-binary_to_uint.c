#include "main.h"

/**
* binary_to_uint -a function that converts a binary number to an unsigned int
* @b: points to string 0 and 1 chars
* Return:A converted number, or 0
*/
unsigned int binary_to_uint(const char *b)
{
size_t len, i;
char character;
unsigned int result;
	if (b == NULL)
		return (0);  /* handle NULL input string */

	len = strlen(b);
	result = 0;

	for (i = 0; i < len; i++)
	{
		character = b[i];

		switch (character)
		{
		case '0':
			result <<= 1;  /* shift left and add 0 */
			break;
		case '1':
			result = (result << 1) | 1;  /* shift left and add 1 */
			break;
		default:
			return (0);  /* handle invalid input string */
		}
	}

	return (result);
}

