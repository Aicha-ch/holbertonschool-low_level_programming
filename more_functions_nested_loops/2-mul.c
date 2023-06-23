#include "main.h"
/**
 * mul - a function that multiplies two integers
 * @a: input integer
 * @b: input integer
 * Return: integer
 */
int mul(int a, int b)
{
	int n = a * b;

	if (a < 0 || b < 0)
		return (n * (-1));
	else
		return (n);
}
