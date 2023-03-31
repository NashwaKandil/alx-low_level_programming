#include "main.h"

/**
 * _strncat - concatenates two strings to an n of bytes
 * @dest: 1st string
 * @src: 2nd string
 * @n: limit
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlen, i;

	destlen = 0;
	for (i = 0 ; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}
