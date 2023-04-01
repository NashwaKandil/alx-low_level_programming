#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @n: string
 * Return: 0
 */

char *rot13(char *n)
{
	int i, j;
	char x[] = "aAbBcCdDeEfFgGhHiIjJkKlLmMnNoOpPqQrRsStTuUvVwWxXyYzZ";
	char y[] = "nNoOpPqQrRsStTuUvVwWxXyYzZaAbBcCdDeEfFgGhHiIjJkKlLmM";

	for (i = 0 ; n[i] != '\0' ; i++)
	{
		for (j = 0 ; j < 52 ; j++)
		{
			if (n[i] == x[j])
			{
				n[i] = y[j];
				break;
			}
		}
	}
	return (n);
}
