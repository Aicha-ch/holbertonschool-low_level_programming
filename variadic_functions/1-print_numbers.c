#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - a function that prints numbers
 * @n: numbers of arguments
 * @separator: separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list ap;
unsigned int i;

if (separator == NULL)
return;

va_start(ap, n);

for (i = 0; i < n; i++)
{
printf("%d", va_arg(ap, const unsigned int));

if (i != (n - 1))
printf("%s", separator);
}
printf("\n");

va_end(ap);
}
