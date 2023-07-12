#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2D array of int
 * @width: input integer that define the width
 * @height: input integer that define the height
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **grid;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		for (j = 0; j < i; j++)
		{
			if (grid[i] == NULL)
				free(grid[i]);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
