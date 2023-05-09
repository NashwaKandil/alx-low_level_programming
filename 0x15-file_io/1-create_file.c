#include "main.h"

/**
 * create_file - creates a file.
 * @filename: file's name
 * @text_content: text in the file
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fds, ln, w;

	if (filename == NULL)
		return (-1);
	ln = 0;
	if (text_content != NULL)
	{
		while (text_content[ln] != '\0')
			ln++;
	}
	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC);
	w = write(fds, text_content, ln);
	if (w == -1 || fds == -1)
		return (-1);
	close(fds);
	return (1);
}
