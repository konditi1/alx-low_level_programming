#include "main.h"

/**
* largest_number - returns the largest of 3 numbers
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
int largest;
/*
if (a >= b && a >= c)
{
largest = a;
}
else if (b >= a && a >= c)
{
largest = b;
}
else
{
largest = c;
}
*/
if (a >= b)
{
largest = a;
}

if (c >= a) 
{
largest = c;
}
else if( b > a)
{
largest = b;
}
return (largest);
}

