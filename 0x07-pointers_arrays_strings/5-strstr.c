#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer to location or 0
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		for (j = 0 ; haystack[i] == needle[j] && needle[j] != '\0' ; j++)
		{
			i++;
		}
		if (needle[j] == '\0')
			return (haystack);
	}
	return (NULL);
}
