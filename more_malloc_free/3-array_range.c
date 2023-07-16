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
	
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < len; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
