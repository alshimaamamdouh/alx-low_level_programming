#include "main.h"
#include <stdio.h>
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: input string
 * @needle: input string
 *
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	while(*haystack)
	{
		char *ii = haystack;
		char *j = needle;

		while ((*ii == *j) && (*j != '\0'))
		{
			ii++;
			j++;
		}
		if (*j == '\0')
		{
			return (haystack);
		}
	*haystack++;	
	}
	return (0);
}
