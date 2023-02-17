#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number to n each time it is executed
 *
 * Return: 0 if it is successful
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;

    if (n > 0)
    {
        printf("%d  is positive", n);
    }
    else if (n < 0)
    {
        printf("%d  is negative", n);
    }
    else
    {
        printf("%d  is zero", n);
    }

    return (0);
}

