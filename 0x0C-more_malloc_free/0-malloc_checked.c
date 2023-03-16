#include "main.h"
#include<stdio.h>
#include<stdlib.h>
/**
 * malloc_checked- function that allocates memory to malloc
 * @b: int to be allocated memory
 * Return:poinnter to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
void *p;
p =malloc(b);
{
if (p == NULL)
exit(98);
}
return (void *)p;
}

