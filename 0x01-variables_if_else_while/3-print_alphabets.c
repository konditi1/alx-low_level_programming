#include <stdio.h>
/**
* main - print lower and upper case alphbet
* Return: 0 if successful
*/
int main(void)
{
char letter;

/* Print lowercase letters */
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}

/* Print uppercase letters */
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}

/* Print a newline character */
putchar('\n');

return (0);
}

