#include "main.h"
/**
* _strchr - locates a character in a string
* @s: pointer to the string to search (const char *)
* @c: character to locate
* Return: pointer to the first occurrence of
* the character c in the string s,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
/* Loop through the string until the end is reached */
for (; *s != '\0'; s++)
{
/*
 * If the current character matches the search character
* return a pointer to it
*/
if (*s == c)
{
return (s);
}
}

/* If the search character was not found, return NULL */
return ((void *)0);
}

