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
int count = 0, last_bit_n, last_bit_m;
while (n || m) 
{
last_bit_n = n & 1;
last_bit_m = m & 1;
if (last_bit_n != last_bit_m)
count++;
n = n >> 1;
m = m >> 1;
}
return (count);
}
