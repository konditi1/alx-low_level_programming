#include <stdio.h>
/**
* main - print lowerCase alphabet
* Return: 0 if succesfull
*/
int main(void)
{
char *str = "abcdefghijklmnopqrstuvwxyz";
int i = 0;

while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
return (0);
}

