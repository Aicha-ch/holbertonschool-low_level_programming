#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: pointer to a string
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, n = 0;
	
	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			n = n << 1;
			n += (b[i] - '0');
			i++;
		}
		else
			return (0);
	}
	return (n);
}
