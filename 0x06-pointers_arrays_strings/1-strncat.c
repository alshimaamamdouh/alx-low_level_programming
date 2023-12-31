#include "main.h"

/**
 **_strncat - concatenates two strings. it will use at
 *most n bytes from src
 *@dest: last string
 *@src: input string
 *@n: number bytes
 *
 * Return: string that concatenates two strings
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
	{
	dest[i] = '\0';
	}
	return (dest);
}
