#include <stdlib.h>

/**
* array_range - creates an array of integers
* @min: the minimum value to include in the array
* @max: the maximum value to include in the array
*
* Return: a pointer to the newly created array,
* or NULL if min > max or if malloc fails
*/
int *array_range(int min, int max)
{
int i;
int *arr;
if (min > max)
return (NULL);

arr = malloc((max - min + 1) * sizeof(int));
if (arr == NULL)
return (NULL);

for (i = 0; i < max - min + 1; i++)
arr[i] = min + i;

return (arr);
}

