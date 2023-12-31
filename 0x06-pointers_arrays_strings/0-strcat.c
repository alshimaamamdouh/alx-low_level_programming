#include "main.h"

/**
 *_strcat - concatenates two strings
 *@dest: last string
 *@src: input string
 *
 * Return: string that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
