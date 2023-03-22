#include <stdio.h>
#include "function_pointers.h"
/**
* array_iterator - iterates over an array and
* applies a function to each element
* @array: the array to iterate over
* @size: the size of the array
* @action: the function to apply to each element of the array
*
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t i;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}

