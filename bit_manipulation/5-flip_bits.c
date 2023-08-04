#include "main.h"

/**
 * flip_bits - a function that returns the number of bits
 * @n: the first integer
 * @m: the second intger
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m, count_bits = 0;

	while (xor > 0)
	{
		count_bits += (xor & 1);
		xor >>= 1;
	}
	return (count_bits);
}
