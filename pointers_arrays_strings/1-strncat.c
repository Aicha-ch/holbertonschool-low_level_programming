#include "main.h"
/**
 * _strncpy - a function that copies a string
 * @dest: pointer to char
 * @src: pointer to char
 * @n: input integer
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	for (; dest[i] != '\0'; i++)
	{
	}
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
	
