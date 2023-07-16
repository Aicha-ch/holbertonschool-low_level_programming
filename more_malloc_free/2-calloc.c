#include "main.h"
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements of an array
 * @size: size of bytes of each element
 * Return: a pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	else
	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		((char*)arr)[i] = 0;
	}
	return(arr);
}
