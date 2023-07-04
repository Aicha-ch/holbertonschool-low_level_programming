#include "main.h"
/**
 * find_sqrt - a function that checks the number's square
 * @a: integer input
 * @b: integer input
 * Return: The square of 'a', otherwise -1
 */
int find_sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (find_sqrt(x, y + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: input integer
 * Return: natural sqaure of n otherwise -1
 */
int _sqrt_recursion(int n)
{
return (find_sqrt(n, 1));
}
