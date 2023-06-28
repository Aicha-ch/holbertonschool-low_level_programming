#include "main.h"
#include <string.h>
/**
 * puts_half - is a function that prints half of a string
 * @str: pointer to a character
 * Return: void
 */
void puts_half(char *str)
{
	int i, len, n;
	
	len = strlen(str);
	n = len / 2;
	i = n;
	while (i < len)
	{
		_putchar (str[i]);
		i++;
	}
	_putchar ('\n');
}
