#include "main.h"

/**
 * _strncpy - cpoies a string
 * @dest: 1st string
 * @src: 2nd string
 * @n: limit
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n ; i++)
		dest[i] = '\0';
	return (dest);
}
