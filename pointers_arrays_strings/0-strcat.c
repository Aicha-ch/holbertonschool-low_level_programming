#include "main.h"
#include <string.h>
/**
 * _strcat - a function that concatenates two strings
 * @dest: pointer to a char
 * @src: pointer to a char
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;
	
	for (;dest[i] != '\0'; i++)
	{
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

