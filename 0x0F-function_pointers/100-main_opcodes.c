#include <stdio.h>
#include <stdlib.h>

/**
* print_opcodes - Prints the opcodes of the current function
* @num_bytes: Number of bytes to print
*/
void print_opcodes(int num_bytes)
{
unsigned char *p = (unsigned char *)print_opcodes;
int i;

for (i = 0; i < num_bytes; i++)
{
printf("%02x ", *(p + i));
}
printf("\n");
}

/**
* main - Entry point
* @argc: Number of arguments passed to the program
* @argv: Array of arguments passed to the program
*
* Return: 0 on success, 1 if the number of arguments is incorrect, 2 if the
* number of bytes is negative
*/
int main(int argc, char *argv[])
{
int num_bytes;

if (argc != 2)
{
printf("Error\n");
return (1);
}

num_bytes = atoi(argv[1]);
if (num_bytes < 0)
{
printf("Error\n");
return (2);
}

print_opcodes(num_bytes);

return (0);
}

