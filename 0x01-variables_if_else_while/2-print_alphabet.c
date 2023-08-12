#include <stdio.h>
/**
 * main - Print alphabets in lowercase.
 *
 * Return: Always 0(success).
 */
int main(void)
{
	char character;

	for (character = 'a'; character <= 'z'; character++)
		putchar(character + '\n');

	return (0);
}
