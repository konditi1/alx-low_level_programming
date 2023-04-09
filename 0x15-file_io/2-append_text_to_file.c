#include "main.h"

/**
* append_text_to_file -A function that appends text at the end of a file
* @filename: name of the file
* @text_content: the NULL terminated string
* to be add at the end of the file
* Return: 1 if success and -1 if failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
int file_description, bytes_to_be_written, length;
bytes_to_be_written = 0;
length = 0;

if (filename == NULL)
return (-1);

file_description = open(filename, O_WRONLY | O_APPEND);
if (file_description == -1)
return (-1);

if (text_content != NULL)
{
while (text_content[length])
length++;

bytes_to_be_written = write(file_description, text_content, length);
if (bytes_to_be_written == -1)
{
close(file_description);
return (-1);
}
}

close(file_description);

return (1);
}

