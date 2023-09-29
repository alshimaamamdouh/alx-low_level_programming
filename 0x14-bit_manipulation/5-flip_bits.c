#include "main.h"

/**
 * flip_bits - returns hamming distance of two bit words
 * @n: the first bit word
 * @m: the second bit word
 *
 * Return: the hamming distance
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int c = n ^ m;
int count = 0;
while (c > 0)

{
count++;
c &= (c - 1);
}
return (count);
}
