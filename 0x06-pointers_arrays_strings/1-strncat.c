#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int w;
	int x;

	w = 0;
	while (dest[w] != '\0')
	{
		w++;
	}
	x = 0;
	while (src[x] != '\0')
	{
		dest[w] = src[x];
		w++;
		x++;
	}

	dest[w] = '\0';
	return (dest);
}
