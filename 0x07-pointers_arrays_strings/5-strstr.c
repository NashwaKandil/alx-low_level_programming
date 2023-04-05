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

	j = 0;
	for (i = 0 ; haystack[i] != '\0' ; i++)
	{
		while (haystack[i] == needle[j] && needle[j] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + i);
		j++;
	}
	return (NULL);
}
