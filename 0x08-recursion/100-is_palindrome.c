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
int i;
int flag = 0;

for (i = 0; *s != '\0' ; i++)
{
if (*s != *(s - i - 1))
{
flag =1;
break;
}
}

if (flag)

{
return (0);
}
return (1);

}
