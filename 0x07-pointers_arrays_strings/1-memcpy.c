#include "main.h"
/**
 * _memcpy - fills memory with another buffer.
 * @dest: input string
 * @src: input to fill
 * @n: input length
 * Return: pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}
