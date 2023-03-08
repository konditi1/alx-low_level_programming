#include "main.h"
/**
 * factorial- finds factorial of a number
 * @n:int to find its factorial
 * Return:fatorial of a given num
 */

int factorial(int n)
{
if (n < 0)
{
return (-1);
}
if (n == 0)
{
return (1);
}
return (n * factorial(n - 1));
}
