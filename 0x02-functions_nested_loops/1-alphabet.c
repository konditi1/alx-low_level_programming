#include "main.h"
/**
* print_alphabet - prints alphabet in lower case from a-z
* Return: nothing
*/

void print_alphabet(void)
{
int i;

for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
/**
* main - entry point
* Return:0 if successful
*/

int main(void)
{
print_alphabet();
return (0);
}
