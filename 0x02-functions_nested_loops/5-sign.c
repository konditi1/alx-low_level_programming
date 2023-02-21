#include "main.h"

/**
* print_sign - prints the sign of a number.
* @n: takes in the parameter n
* Return: 1 if the number is positive, 0 if the number is zero,
* and -1 if the number is negative.
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
