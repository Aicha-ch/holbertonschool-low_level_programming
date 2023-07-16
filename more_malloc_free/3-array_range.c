#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: input min integer
 * @max: input max integer
 * Return: pointer to newly created array
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	if (min > max)
	{
		return (NULL);
	}
	else
	for (i = min; i <= max; i++)
	{
		len++;
	}
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	return (arr);
}
