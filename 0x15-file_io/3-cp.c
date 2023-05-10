#include "main.h"

/**
 * copy_all - copies the content of a file to another file.
 * Return: nothing
 */

void copy_all(const char *file_from, const char *file_to)
{
	int fd1, fd2, n;
	char buff[1024];

	if (file_from == NULL)
	{
		exit(98);
		dprintf(2, "Error: Can't read from file %s\n", "file_from");
	}
	fd1 = open(file_from, O_RDONLY);
	if (fd1 == -1)
	{	exit(98);
		dprintf(2, "Error: Can't read from file %s\n", "file_from");
	}
	fd2 = open(file_to, O_WRONLY | O_TRUNC);
	if (fd2 == -1)
	{
		exit(99);
		dprintf(2, "Error: Can't write to file %s\n", "file_to");
        }
	while ((n = read(fd1, buff, 1024)) != 0)
		write(fd2, buff, n);
	close(fd1);
	close(fd2);
}
