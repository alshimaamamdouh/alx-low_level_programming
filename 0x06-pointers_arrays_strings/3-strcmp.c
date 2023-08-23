#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: input string one
 * @s2: input string two
 *
 * Return: if the same return 0
 */

int _strcmp(char *s1, char *s2)
{

int flag = 0, i = 0;

while (s1[i] != '\0' && s2[i] != '\0')
{
if (s1[i] != s2[i])

{
flag = 1;
break;
}
i++;
}
if (flag == 0)
return (0);

else
return (*s1 - *s2);
}
