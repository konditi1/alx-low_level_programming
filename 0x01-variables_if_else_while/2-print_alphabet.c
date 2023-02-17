#include <stdio.h>

int main(void)
{
    char *str = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    while (str[i] != '\0')
    {
        putchar(str[i]);
        putchar('\n');  // Add a line break after each character
        i++;
    }

    return 0;
}

