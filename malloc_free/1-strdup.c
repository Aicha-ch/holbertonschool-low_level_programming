#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - a function that returns a pointer to a newly allocated space
 * @str: pointer to character
 * Return: pointer to string otherwise NULL if insufficient memory
 */
char *_strdup(char *str)
{
	char *new_str;
	int i, len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	new_str = malloc(sizeof(char) * len + 1);
	if (new_str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		new_str[i] = str[i];
	}
	new_str[len] = '\0';
	free (new_str);
	return (new_str);
}
