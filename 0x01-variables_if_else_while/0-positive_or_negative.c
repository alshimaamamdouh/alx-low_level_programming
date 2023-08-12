#include <time.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - detect and print if random number
 *        it is positive, negative, or zero.
 *
 * Return: Always 0 (success).
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);

	return (0);
}
