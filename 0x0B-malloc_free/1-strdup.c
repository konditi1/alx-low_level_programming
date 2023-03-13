#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _strdup - duplicates a string in memory
* @str: the string to duplicate
*
* Return: On success, a pointer to the duplicated string is returned.
* On failure, NULL is returned.
*/
char *_strdup(char *str)
{
char *dup_str;
unsigned int len, i;

if (str == NULL)
return (NULL);

for (len = 0; str[len] != '\0'; len++)
continue;

dup_str = malloc(sizeof(char) * (len + 1));
if (dup_str == NULL)
return (NULL);

for (i = 0; i <= len; i++)
dup_str[i] = str[i];

return (dup_str);
}

