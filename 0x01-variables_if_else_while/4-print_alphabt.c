#include <stdio.h>

/**
 * main - Print alphabets in lowercase, except q and e.
 *
 * Return: Always 0(success).
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'e' && c != 'q')
			putchar(c);
	}

	putchar('\n');

	return (0);
}
