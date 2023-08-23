#include "main.h"
/**
 * string_toupper - changes all lowercase letters of astring to uppercase.
 * @hi: input string
 *
 * Return: Lowercase changed to uppercase of the string
 */
char *string_toupper(char *hi)
{
	int i;

	for (i = 0; hi[i] != '\0'; i++)
	{
		if (hi[i] >= 'a' && hi[i] <= 'z')
		{
			hi[i] = hi[i] - 32;
		}
	}
	return (hi);
}
