#include "main.h"
#include <stddef.h>
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring, or NULL if
 * the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++)
			;

		if (needle[k] == '\0')
			return (haystack + i);
	}

	return (NULL);
}

