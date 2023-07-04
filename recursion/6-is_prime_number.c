#include "main.h"
/**
 * is_prime_number - a function that returns 1 if a is a prime number
 * @n: input integer
 * Return: 1 if n is a prime number, otherwise 0
 */
int is_prime_number(int n)
{
	if (n == 1 || n < 0)
		return (0);
	if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0 || n % 7 == 0)
		return (0);
	return (1);
}
