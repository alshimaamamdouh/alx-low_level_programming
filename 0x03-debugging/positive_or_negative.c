#include "main.h"

/**
 * main - test if number positive or negative
 * @i: inpute we will test
 *
 */

void positive_or_negative(int i)
{
	if(i > 0)
		printf("%d is positive\n", i);
	else if(i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
