#include "main.h"
/**
 * is_prime_number - checks if a number is prime
 * @n: Number Integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n == 3)
	{
		return (1);
	}
	else if (((n * n) - 1) % 24 == 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

