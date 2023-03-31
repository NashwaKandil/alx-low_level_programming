#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: string
 * Return: 0
 */

char *leet(char *n)
{
	int i, x;

	char a[] = "AaEeOoTtLl";
	char b[] = "4433007711";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (x = 0 ; x < 10 ; x++)
		{
			if (n[i] == a[x])
			{
				n[i] = b[x];
			}
		}
	}
	return (n);
}
