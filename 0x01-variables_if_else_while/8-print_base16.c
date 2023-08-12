#include <stdio.h>

/**
 * main - Prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0(success).
 */
int main(void)
{
	int a;
	char c;

	for (a = 0; a < 10; a++)
		putchar((a % 10) + '0');

	for (c = 'a'; c <= 'f'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
