#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet, in lowercase
 *
 * return: no return value
 */
void print_alphabet_x10(void)
{
int i = 0;
char x = 'a';
while (i < 10)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar (x);
}
i++;
_putchar ('\n');
}
}
