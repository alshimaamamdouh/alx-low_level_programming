#include "main.h"
/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: input string
 * @needle: input string
 *
 * Return: pointer.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; *haystack++)
	{
		char *i = haystack;
		char *j = needle;

		while ((*i == *j) && (*j != '\0'))
		{
			i++;
			j++;
		}
		if (*j == '\0')
			return (hystack);
	}
	return (0);
}
