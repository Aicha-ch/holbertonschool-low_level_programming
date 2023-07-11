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
	int i, len, len1, len2;
	char *str;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	
	len1 = strlen(s1);
	len2 = strlen(s2);
	len = len1 + len2;
	str = malloc(sizeof(char) * len + 1);
	for (i = 0; i < len; i++)
	{
		str[i] = s1[i];
	}
	for (

	return(s);
	free(s);
}
