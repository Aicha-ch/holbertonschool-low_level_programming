#include "main.h"
#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of argument passed
 * @argv: array pointing to arguement
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;
	argc = 0;
	while (argv[i] != NULL)
	{
		i++;
		argc++;
	}
	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
