#include <stdio.h>
/**
 * main- entry point
 * prints a two digit number in ascending order
 * Return: 0 if successfull
 */
int main(void)
{
int i, j, k;

for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
k = (i * 10) + j;
putchar(k / 10 + '0');
putchar(k % 10 + '0');
if (i < 8)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');

return (0);
}

