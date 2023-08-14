#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - is a  function that prints numbers
 * @n: inputs parameters
 * @separator: input character
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	if (separator == NULL)
	{
		return;
	}

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, const unsigned int));
	}

	if (i != (n - 2))
	{
		printf("%s ", separator);
	}
	printf("\n");

	va_end(args);
}
