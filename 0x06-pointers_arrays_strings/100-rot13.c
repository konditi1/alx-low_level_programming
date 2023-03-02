#include "main.h"
/**
* rot13 - Encodes a string using ROT13.
* @str: The string to encode.
*
* Return: A pointer to the encoded string.
*/
char *rot13(char *str)
{
char *result = str;
int i, j;

for (i = 0; str[i] != '\0'; i++)
{
for (j = 0; j < 13 && str[i] != '\0'; j++)
{
if ((str[i] >= 'a' && str[i] < 'n') || (str[i] >= 'A' && str[i] < 'N'))
{
result[i] = str[i] + 13;
}
else if ((str[i] >= 'n' && str[i] <= 'z') || (str[i] >= 'N' && str[i] <= 'Z'))
{
result[i] = str[i] - 13;
}
else
{
result[i] = str[i];
}

i++;
}

i--;
}

return (result);
}

