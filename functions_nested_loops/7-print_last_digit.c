#include "main.h"
/**
 * print_last_digit - a function that prints the last digit of a number
 * @n: input integer
 * Return: last_digit
 */
int print_last_digit(int n)
{
n = n % 10;
if (n < 0)
{
n = n* (-1);
_putchar (n + '0');
return (n);
}
_putchar (n + '0');
return (n);
}
