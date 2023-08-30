#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: input string
 *
 */

void _puts_recursion(char *s)
{
while (*s)
{
_putchar (*s);
s++;
}
if (*s == '\0')
{
_putchar ('\n');
}
}
