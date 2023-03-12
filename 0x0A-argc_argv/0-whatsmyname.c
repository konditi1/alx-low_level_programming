#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point of the program
*
* @argc: The number of command-line arguments passed to the program
* @argv: An array of strings containing the command-line arguments
*
* Description: This program prints its name to standard output.
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[0]);
return (0);
}

