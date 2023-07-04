#include "main.h"
/**
 * _strspn - a function that gets the length of a prefix substring
 * @s: pointer to charachter
 * @accept: pointer to character
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j] == '\0')
			return (count);
		count++;
	}
	return (count);
}

