#include "main.h"

/**
 *cap_string - changes all lowercase letters
 *@s: input string
 *
 *Return: return pointer to string
 */
char *cap_string(char *s)
{
char special[] = {'\t', '\n', ' ', ',', ';', '!',
		 '.', '?', '\"', '(', ')', '{', '}'};
int i, j = 0, flag = 0;
while (s[j] != '\0')
{
for (i = 0; i < 13; i++)
{
if (s[j] != special[i])
{
flag = 0;
}
else
{
flag = 1;
}
}
if (flag == 1 && (s[i] >= 'a' && s[i] <= 'z'))
{
s[j] = s[j] - 32;
flag = 0;
}
else
{
flag = 0;
}
j++;
}
return (s);
}

