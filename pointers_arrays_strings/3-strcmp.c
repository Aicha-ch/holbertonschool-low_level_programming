#include "main.h"
/**
 * _strcmp - a function that compares two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	for (i =  0; s1[i] != '\0'; i++)
	{
		for (j = 0; s2[j] != '\0'; j++)
		{
			if (s1[i] == s2[j])
				return (0);
			else
				return (s1[i] - s2[j]);
		}
	}
	return (0);
}
