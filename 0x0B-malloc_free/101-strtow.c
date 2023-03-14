#include <stdlib.h>
#include <string.h>
#define DELIMITER " "

/**
* count_words - count the number of words in a string
* @str: string to count words in
*
* Return: number of words in the string
*/
static size_t count_words(const char *str)
{
size_t count = 0;
int in_word = 0;
while (*str)
{
if (*str == ' ')
{
in_word = 0;
}
else if (!in_word)
{
in_word = 1;
count++;
}
str++;
}
return (count);
}
/**
* strtow - split a string into words
* @str: string to split
*
* Return: pointer to array of words, or NULL if str is NULL or empty
*/
char **strtow(char *str)
{
size_t i, j, num_words, word_len;
char **words, *word_start;

if (!str || !*str)
return (NULL);
num_words = count_words(str);
words = malloc(sizeof(char *) * (num_words + 1));
if (!words)
return (NULL);
i = 0;
while (*str)
{
if (*str == ' ')
{
str++;
continue;
}
word_start = str;
word_len = 0;
while (*str && *str != ' ')
{
word_len++;
str++;
}
words[i] = malloc(sizeof(char) * (word_len + 1));
if (!words[i])
{
while (i--)
free(words[i]);
free(words);
return (NULL);
}
for (j = 0; j < word_len; j++)
words[i][j] = word_start[j];
words[i][j] = '\0';
i++;
}
words[i] = NULL;
return (words);
}

