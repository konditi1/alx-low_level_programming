#include "main.h"

/**
* create_file - A function that creates a file
* @filename: the name of the file to be create
* @text_content: a NULL terminated string to write to the file
* Return: 1 if success and -1 for failure
*/
int create_file(const char *filename, char *text_content)
{
int file_descrip, bytes_to_be_written;
size_t length;

if (filename == NULL)
return (-1);
file_descrip = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
if (file_descrip == -1)
return (-1);
if (text_content != NULL)
{
for (length = 0; text_content[length] != '\0'; length++)
;
bytes_to_be_written = write(file_descrip, text_content, length);
if (bytes_to_be_written == -1)
{
close(file_descrip);
return (-1);
}
}
close(file_descrip);
return (1);
}

