#include <stdio.h>
/**
 * main - Print alphabets in lowercase.
 *
 * Return: Always 0(success).
 */
int main(void)
{
	char charact;

	for (charact = 'a'; charact <= 'z'; charact++)
		putchar(charact);

	putchar('\n');

	return (0);
}
