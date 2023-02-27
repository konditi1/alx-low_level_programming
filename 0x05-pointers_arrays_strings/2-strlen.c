#include "main.h"
/**
* _strlen - function that returns the length of a string
* Return: returns the length of a string
* @s:is parameter of string data type
*/

int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
