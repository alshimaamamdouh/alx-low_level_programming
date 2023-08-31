#include "main.h"

/**
 * _strlen_recursion - Returns Length of String
 * @s: input string
 *
 * Return: On success
 *
 */

int _strlen_recursion(char *s)
{
int i;
if (*s != '\0')
{

i = 1 +  _strlen_recursion(s + 1);
return (i);
}
return (0);
}
