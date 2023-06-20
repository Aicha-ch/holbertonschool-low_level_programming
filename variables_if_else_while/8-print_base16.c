#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (Success)
 */
int main(void)
{
int i;
char x;
for (i = 0; i <= 9; i++)
{
putchar (i + '0');
}
for (x = 'a'; x <= 'f'; x++)
{
putchar (x);
}
putchar ('\n');
return (0);
}
