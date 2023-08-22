#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input string
 */
void rev_string(char *s)
{
	char temp;
	int i, len, lenn;

	len = 0;
	lenn = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	lenn = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[lenn];
		s[lenn--] = temp;
	}
}
