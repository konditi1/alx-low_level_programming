#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* _calloc - allocates memory for an array, using malloc.
* @nmemb: number of elements in the array.
* @size: size of each element in bytes.
*
* Return: pointer to the allocated memory, or NULL if an error occurred.
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *ptr;
/*
* Check for invalid arguments
*/
if (nmemb == 0 || size == 0)
return (NULL);

/*
* Allocate memory using malloc
*/
ptr = malloc(nmemb * size);

/*
* Check if malloc failed
*/
if (ptr == NULL)
return (NULL);

/*
* Zero out the allocated memory
*/
memset(ptr, 0, nmemb * size);

return (ptr);
}

