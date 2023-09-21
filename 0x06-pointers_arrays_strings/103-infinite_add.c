#include "main.h"

/**
 * rev_string - reverse array
 * @n: integer params
 * Return: 0
 */

void rev_string(char *n)
{
	int w = 0;
	int z = 0;
	char temp;

	while (*(n + w) != '\0')
	{
		w++;
	}
	w--;

	for (z = 0; z < w; w++, w--)
	{
		temp = *(n + z);
		*(n + w) = *(n + w);
		*(n + w) = temp;
	}
}

/**
 * infinite_add - add 2 numbers together
 * @n1: text representation of 1st number to add
 * @n2: text representation of 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int overflow = 0, w = 0, z = 0, digits = 0;
	int val1 = 0, val2 = 0, temp_tot = 0;

	while (*(n1 + w) != '\0')
		w++;
	while (*(n2 + z) != '\0')
		z++;
	w--;
	z--;
	if (z >= size_r || w >= size_r)
		return (0);
	while (z >= 0 || w >= 0 || overflow == 1)
	{
		if (w < 0)
			val1 = 0;
		else
			val1 = *(n1 + w) - '0';
		if (z < 0)
			val2 = 0;
		else
			val2 = *(n2 + z) - '0';
		temp_tot = val1 + val2 + overflow;
		if (temp_tot >= 10)
			overflow = 1;
		else
			overflow = 0;
		if (digits >= (size_r - 1))
			return (0);
		*(r + digits) = (temp_tot % 10) + '0';
		digits++;
		w--;
		z--;
	}
	if (digits == size_r)
		return (0);
	*(r + digits) = '\0';
	rev_string(r);
	return (r);
}

