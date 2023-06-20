#include "main.h"
/**
 * print_alphabet_x10 - prints 10X alphabet
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
