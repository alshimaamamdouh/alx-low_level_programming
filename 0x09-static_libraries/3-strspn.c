#include "main.h"
/**
 * _strspn - prints the consecutive caracters of s1 that are in s2.
 * @s: input string
 * @accept: input string
 *
 * Return: new string.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j = 0;
	int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
{
j++;
break;
}
else if (accept[i + 1] == '\0')
return (j);
}
s++;
}
return (j);
}
