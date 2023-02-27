#include "main.h"
/**
* swap.c-  function that swaps the values of two integers.
* @a:parameter an int type which is swapt
* @b:parameter an int which is swapt
* Return: void
*/
void swap_int(int *a, int *b)
{
int m;
m = *a;

*a = *b;

*b = m;
}
