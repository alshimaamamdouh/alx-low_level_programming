#include "main.h"
/**
 * _strpbrk - prints the consecutive caracters of s1 that are in s2.
 * @s: input string
 * @accept: input string
 *
 * Return: pointer to matched or null
 */
char *_strpbrk(char *s, char *accept)
{
int i;

while (*s)
{
for (i = 0; accept[i]; i++)
{
if (*s == accept[i])
return (s);
}
s++;

}

return ('\0');
}
