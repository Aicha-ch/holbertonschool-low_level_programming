#include"main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: pointer to character
 * @s2: pointer to character
 * @n: integer that define the number of bytes
 * Return: a pointer to newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *str;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= len2)
	{
		str = malloc(sizeof(char) * (len1 + len2 + 1));
		if (str == NULL)
		{
			return (NULL);
		}
		strncpy(str, s1, len1);
		strncat(str, s2, len2);
	}
	else
	{
		str = malloc(sizeof(char) * (len1 + n + 1));

		if (str == NULL)
		{
			return (NULL);
		}
		strncpy(str, s1, len1);
		strncat(str, s2, n);
	}
	return (str);
}
