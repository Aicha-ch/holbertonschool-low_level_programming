#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: array pointing to arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);

		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
