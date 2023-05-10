#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name
 * @text_content: text to add
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	i = 0;
	while (text_content[i] != '\0')
		i++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write(fd, text_content, i);
	close(fd);
	return (1);
}
