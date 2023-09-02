#include "main.h"
/**
 * _memset - fills memory with a constant byte.
 * @s: input string
 * @b: input cahr to fill
 * @n:input lenght
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
