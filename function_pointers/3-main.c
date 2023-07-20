#include "3-calc.h"
/**
 * main - entry point
 * @argc: arguments passed to the function
 * @argv: array containing arguments
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n1, n2, res;
	char *s;

	if (argc != 4)
	{

		printf("Error\n");
			exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	s = argv[2];

	if (get_op_func(s) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
			exit(99);
	}

	if ((s[0] == '/' || s[0] == '%') && (n2 == 0))
	{
		printf("Error\n");
			exit(100);
	}

	res = get_op_func(s)(n1, n2);
	printf("%d\n", res);
	return (0);
}
