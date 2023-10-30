#include "main.h"
#include <fcntl.h>

#define BUFFER_SIZE 1024

/**
* main - Entry point of the program.
* @argc: The number of command-line arguments.
* @argv: An array of strings
* Return: Return 0 on successful execution
*/
int main(int argc, char *argv[])
{
int file_from, file_to;
ssize_t bytes_read, bytes_written;
char buffer[BUFFER_SIZE];

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
return (97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

if (file_from == -1 || file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open files\n");
return (98);
}
while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
{
bytes_written = write(file_to, buffer, bytes_read);
if (bytes_written == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
return (99);
}
}
if (bytes_read == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
return (98);
}
close(file_from);
close(file_to);
return (0);
}
