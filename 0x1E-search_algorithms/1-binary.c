#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index where value is located, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
size_t left = 0, right = size - 1, mid;

if (array == NULL)
return (-1);

while (left <= right)
{
printf("Searching in array: ");
for (mid = left; mid < right; mid++)
{
printf("%d, ", array[mid]);
}
printf("%d\n", array[mid]);

mid = left + (right - left) / 2;

if (array[mid] == value)
{
return (mid);
}
else if (array[mid] < value)
{
left = mid + 1;
}
else
{
right = mid - 1;
}
}
return (-1);
}
