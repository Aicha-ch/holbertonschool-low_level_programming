#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat -  a function that concatenates two strings
 * @s1: pointer to character
 * @s2: pointer to character
 * Return: pointer to string or NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len, len1, len2;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (i = 0, j = len1; i < len2 && j < len; j++, i++)
	{
		str[j] = s2[i];
	}
	str[len] = '\0';
	return (str);
}
