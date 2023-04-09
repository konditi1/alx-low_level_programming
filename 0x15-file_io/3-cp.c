#include "main.h"
/**
 * main - copies the content of a file to another file
 * @argc: arguments count
 * @argv: arguments vector
 * Return: 0 if success, or an error code
 */
int main(int argc, char *argv[])
{
    int file_from, file_to;
    ssize_t num_read, num_written;
    char buffer[BUFFER_SIZE];
    struct stat st;

    if (argc != 3)
    {
        dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
        exit(97);
    }
    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
        exit(98);
    }
    if (fstat(file_from, &st) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't get file information for %s\n", argv[1]);
        close(file_from);
        exit(98);
    }
    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, st.st_mode & 0777);
    if (file_to == -1)
    {
        dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
        close(file_from);
        exit(99);
    }
    while ((num_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        num_written = write(file_to, buffer, num_read);
        if (num_written != num_read)
        {
            dprintf(STDERR_FILENO, "Error: Could not write to %s\n", argv[2]);
            close(file_from);
            close(file_to);
            exit(99);
        }
    }
    if (num_read == -1)
    {
        dprintf(STDERR_FILENO, "Error: Could not read from %s\n", argv[1]);
        close(file_from);
        close(file_to);
        exit(98);
    }
    if (close(file_from) == -1 || close(file_to) == -1)
    {
        dprintf(STDERR_FILENO, "Error: Could not close file descriptor\n");
        exit(100);
    }
    return (0);
}

