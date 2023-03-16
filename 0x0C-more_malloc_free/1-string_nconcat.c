#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
* string_nconcat - concatenates two strings
* @s1: the first string
* @s2: the second string (up to n bytes)
* @n: the maximum number of bytes of s2 to concatenate
*
* Return: a pointer to the concatenated string, or NULL if allocation fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
size_t new_len;
size_t s2_len;
size_t s1_len;
char *new_str;
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
s1_len = strlen(s1);
s2_len = strlen(s2);

if (n >= s2_len)
{
n = s2_len;
}
new_len = s1_len + n + 1;
new_str = malloc(new_len);
if (new_str == NULL)
{
return (NULL);
}
memcpy(new_str, s1, s1_len);
memcpy(new_str + s1_len, s2, n);
new_str[new_len - 1] = '\0';
return (new_str);
}
