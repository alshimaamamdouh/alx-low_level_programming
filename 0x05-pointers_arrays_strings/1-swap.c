#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 * @a: input one
 * @b: input two
 */
void swap_int(int *a, int *b)
{
	int ab;

	ab = *a;
	*a = *b;
	*b = ab;
}
