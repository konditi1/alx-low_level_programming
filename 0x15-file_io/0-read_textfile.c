#include "main.h"

/**
 * read_textfile - Reads text file and prints it to POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 * Return: actual number of letters read and printed, 0 if an error
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_written, bytes_read;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buf = malloc(letters + 1);

	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	bytes_read = read(fd, buf, letters);

	if (bytes_read == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}
	buf[bytes_read] = '\0';

	bytes_written = write(STDOUT_FILENO, buf, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	return (bytes_written);
}

