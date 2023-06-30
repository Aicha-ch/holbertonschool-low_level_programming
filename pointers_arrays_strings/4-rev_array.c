#include "main.h"
/**
 * reverse_array - a function that reverses the content of an array
 * @a: array
 * @n: input integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, j;
	int tmp;

	for (i = n - 1, j = 0; j < i; i--, j++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j] = tmp;
	}
}
