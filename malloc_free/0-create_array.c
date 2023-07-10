#include "main.h"
#include <stdlib.h>
/**
 * *create_array -  a function that creates an array of chars initialized with C
 * @size: size of the array
 * @c: character used for initialization
 * Return: pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ar;

	ar = malloc(sizeof(char) * size);
	
	if (size == 0 || ar == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ar[i] = c;
	}
	return (ar);
}
