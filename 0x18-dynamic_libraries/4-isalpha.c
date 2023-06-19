#include "main.h"

/**
* _isalpha - checks for alphabetic character.
* @c: passes c into the function
* Return: 1 or 0
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
return (0);
}
