#include "main.h"
#include <string.h>
/**
 * _strcpy - a function that copies the string pointed to by src
 * @dest: pointer to a character
 * @src: pointer to a character
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; (src[i] != '\0'); i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
