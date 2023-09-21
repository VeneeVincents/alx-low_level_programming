#include "main.h"

/**
 * leet - encode into 1337speak
 * @n: input value
 * Return: n value
 */

char *leet(char *n)
{
	int w, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (w = 0; n[w] != '\0'; w++)
	{
		for (z = 0; z < 10; z++)
		{
			if (n[w] == s1[z])
			{
				n[w] = s2[z];
			}
		}
	}
	return (n);
}
