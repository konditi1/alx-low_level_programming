#include <stdlib.h>
#include <string.h>
/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the memory previously allocated with malloc(old_size)
* @old_size: size, in bytes, of the allocated space for ptr
* @new_size: new size, in bytes, of the new memory block
* Return: pointer to the newly allocated memory block
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
/*
* Handle case when new size is 0
*/
void *new_ptr;
unsigned int copy_size;
if (new_size == 0)
{
free(ptr);
return (NULL);
}
/*
* Handle case when ptr is NULL
*/
if (ptr == NULL)
{
return (malloc(new_size));
}
/*
* Allocate memory using malloc
*/
new_ptr = malloc(new_size);
/*
* Check if malloc failed
*/
if (new_ptr == NULL)
{
return (NULL);
}
/*
* Copy contents to the newly allocated space
*/
copy_size = old_size < new_size ? old_size : new_size;
memcpy(new_ptr, ptr, copy_size);
/*
* Free the old pointer
*/
	free(ptr);
return (new_ptr);
}

