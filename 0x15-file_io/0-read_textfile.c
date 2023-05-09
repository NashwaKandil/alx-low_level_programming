#include "main.h"
#include <stddef.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX st output
 * @filename: the file name
 * @letters: the number of letters it should read and print
 * Return: he actual number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, fds;
	char *arr;

	if (filename == NULL)
		return (0);
	fds = open(filename, O_RDONLY);
	if (fds == -1)
		return (0);
	arr = malloc(sizeof(char) * letters);
	n = read(fds, arr, letters);
	n = write(STDOUT_FILENO, arr, n);
	free(arr);
	close(fds);
	return (n);
	
}
