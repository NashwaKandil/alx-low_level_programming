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

	for (i = 0 ; needle[i] != '\0' ; i++)
	{
		for (j = 0 ; haystack[j] != '\0' ; j++)
		{
			if (needle[i] == haystack[j])
				return (haystack + j);
		}
	}
	return (NULL);
}
