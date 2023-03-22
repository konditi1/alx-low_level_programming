#include <stdio.h>
#include "function_pointers.h"
/**
* int_index - searches for an integer
* @array: pointer to the array of integers to search in
* @size: size of the array
* @cmp: pointer to the function used to compare values
*
* Return: index of the first element for which cmp function does not return 0,
* or -1 if no element matches or if size <= 0.
*/
int int_index(int *array, int size, int (*cmp)(int))
{
int i;
if (size <= 0 || array == NULL || cmp == NULL)
return (-1);

for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
return (i);
}

return (-1);
}
