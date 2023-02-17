#include <stdio.h>
/**
* main prints lower case numbers and scipe e and q
* Return : 0 if successful
*/
int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
/* Skip the letters 'e' and 'q' */
if (letter == 'e' || letter == 'q')
{
continue;
}

/* Print the current letter */
putchar(letter);
}

/* Print a newline character */
putchar('\n');

return (0);
}

