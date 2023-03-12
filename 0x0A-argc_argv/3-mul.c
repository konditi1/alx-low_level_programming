#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argc: int that count the num of entries
 * @argv: string which store the strings input
 * Return: 0if success or 1 i error
 */
int main(int argc, char *argv[])
{
int m;
int n;
if (argc != 3)
{
printf("error\n");
return (1);
}
n = atoi(argv[1]);
m = atoi(argv[2]);
printf("%d\n", n * m);
return (0);
}
