#include "main.h"

/**
 * reverse_array - reverses the content of an array ofintegers.
 * @a: input array
 * @n: input byte
 *
 */
void reverse_array(int *a, int n)
{
	int i, j;

	j = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int c, e;

		c = a[i];
		e = a[j];
		a[i] = e;
		a[j] = c;
		j--;
	}
}
