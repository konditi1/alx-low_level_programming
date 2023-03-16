#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* multiply - Multiplies two positive integers
* @num1: First number to be multiplied
* @num2: Second number to be multiplied
*
* Return: The result of the multiplication
*/
int multiply(int num1, int num2)
{
return (num1 * num2);
}

/**
* main - Entry point
* @argc: Number of command-line arguments
* @argv: Array of command-line arguments
*
* Return: 0 on success, 98 on error
*/
int main(int argc, char *argv[])
{
int i, j, num1, num2, result;

if (argc != 3)
{
printf("Error\n");
return (98);
}

for (i = 1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (!isdigit(argv[i][j]))
{
printf("Error\n");
return (98);
}
}
}

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = multiply(num1, num2);

printf("%d\n", result);

return (0);
}

