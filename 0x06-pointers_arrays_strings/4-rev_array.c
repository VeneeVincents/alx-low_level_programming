#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int w;
	int z;

	for (w = 0; w < n--; w++)
	{
		t = a[w];
		a[w] = a[n];
		a[n] = t;
	}
}
