#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/**
*main- prints a random number to n each time it is executed
*Return: 0 if it is succesful
*betty style doc for function main goes there */
int main(void)
{
        int n;

	srand(time(0));
	
        n = rand() - RAND_MAX / 2;
	
        if (n > 0)
        {
                printf("is positive");
        }
        else if (n < 0)
        {
                printf("is negative");
        }
        else
        {
                printf("is zero");
        }  
                /* your code goes there */
	return (0);
}

