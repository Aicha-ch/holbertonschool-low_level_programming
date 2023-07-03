#include "main.h"
#include <stddef.h>
/**
 * _strstr - a function that locates a substring
 * @haystack: pointer to character
 * @needle: pointer to charachter
 * Return: pointer to substring
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			       break;
		}
		if (needle[j] == '\0')
		return (haystack + i);
	}
	return (NULL);
}
