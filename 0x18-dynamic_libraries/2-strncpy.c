#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: char parameter
 * @src: char parameter
 * @n: an int for the num to be copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;
int length = 0;

while (src[length] != '\0' && length < n)
{
length++;
}

for (i = 0; i < length; i++)
{
dest[i] = src[i];
}
for (; i < n; i++)
{
dest[i] = '\0';
}
return (dest);
}
