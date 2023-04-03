#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memrory area to paste
 * @src: memory area to copy
 * @n: n bytes of memory area to be copied
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, j;

	j = 0;
	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[j];
		j++;
	}
	return (dest);
}
