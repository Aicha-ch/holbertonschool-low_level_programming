#ifndef _variadic_functions_h_
#define _variadic_functions_h_

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#include <stdio.h>
#include <stdarg.h>

/**
 * struct print - definition of structure
 *
 * @c: char
 * @f: function
 */
typedef struct print
{
	char *c;
	void (*f)(va_list args);
}print_t;

#endif
