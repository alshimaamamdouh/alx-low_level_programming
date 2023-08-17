#include <stdio.h>
/**
*main - prints count of multiples of 3 or 5 below 1024
*
*Return: return 0(success)
*/
int main(void)
{
int i;
int sum = 0;
for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}
printf("%d\n", sum);
return (0);
}