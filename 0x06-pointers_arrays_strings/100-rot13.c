#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @s: pointer to string parameters
 *
 * Return: *s
 */

char *rot13(char *s)
{
	int w;
	int z;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (w = 0; s[w] != '\0'; w++)
	{
		for (z = 0; z < 52; z++)
		{
			if (s[w] == data1[z])
			{
				s[w] = datarot[z];
				break;
			}
		}
	}
	return (s);
}
