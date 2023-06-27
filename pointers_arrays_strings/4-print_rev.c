#include "main.h"
#include <string.h>
/**
 * print_rev - is a function that prints a string
 * @s: pointer to character
 * Return: void
 */
void print_rev(char *s)
{
	int i;
	int len = strlen(s);

	for (i = len; i >= 0; i--)
	{
		_putchar (s[i]);
	}
	_putchar ('\n');
}
