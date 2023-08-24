#include "main.h"

/**
 * leet - encode string to 1337
 * @s: string to encode
 * Return: encoded string
 */
char *leet(char *s)
{
	char *r = s;
	char ss[] = { 'a', 'e', 'o', 't', 'l' };
	char c[] = { 4, 3, 0, 7, 1 };
	int i = 0;

	while (*s)
	{
		for (i = 0; i < 5; i++)
		{
			if (*s == ss[i] || *s == ss[i] - 32)
				*s = c[i] + '0';
		}
		s++;
	}
	return (r);
}
