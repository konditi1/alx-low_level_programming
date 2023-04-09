#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: the name of the file to read
* @letters: the number of letters it should read and print
*
* Return: the actual number of letters it could read and print, or 0 on failure
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *file_pointer;
ssize_t bytes_to_be_read, bytes_to_be_written;
char *buffer;

if (filename == NULL)
return (0);
file_pointer = fopen(filename, "r");
if (file_pointer == NULL)
return (0);
buffer = malloc(letters * sizeof(char));
if (buffer == NULL)
{
fclose(file_pointer);
return (0);
}
bytes_to_be_read = fread(buffer, sizeof(char), letters, file_pointer);
if (bytes_to_be_read == 0)
{
fclose(file_pointer);
free(buffer);
return (0);
}
bytes_to_be_written = fwrite(buffer, sizeof(char), bytes_to_be_read, stdout);
if (bytes_to_be_written != bytes_to_be_read)
{
fclose(file_pointer);
free(buffer);
return (0);
}
fclose(file_pointer);
free(buffer);
return (bytes_to_be_written);
}

