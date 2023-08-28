#include "main.h"
/**
 * _strchr - prints from the first occurrence of a char.
 * @s: input string
 * @c: input char
 *
 * Return:  pointer to cahr c or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
