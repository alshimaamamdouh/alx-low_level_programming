#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to evaluate
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 *
 */
int is_palindrome(char *s)
{
int i = 0;
int flag = 0;

if (*s != '\0')
{
if (*s != *(s - i - 1))
{
flag =1;
}
i++;
is_palindrome(s + 1);
}

if (flag)

{
return (0);
}
return (1);

}
