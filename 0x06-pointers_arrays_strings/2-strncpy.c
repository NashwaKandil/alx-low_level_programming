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

	for (i = 0 ; i < n ; i++)
		dest[i] = src[i];
	return (dest);
}
