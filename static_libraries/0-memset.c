#include "main.h"
/**
 * _memset - a function that fills memory with a constant byte
 * @s: pointer to character
 * @b: input character
 * @n: input integer
 * Return: pointer to character
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
