#include "main.h"
/**
 * jack_bauer - a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: No return
 */
void jack_bauer(void)
{
int h, m, h1, h2, m1, m2;
h = 0;
while (h < 24)
{
h1 = h / 10;
h2 = h % 10;
m = 0;
while (m < 60)
{
m1 = m / 10;
m2 = m % 10;
_putchar(h1 + '0');
_putchar(h2 + '0');
_putchar(':');
_putchar(m1 + '0');
_putchar(m2 + '0');
_putchar('\n');
m++;
}
h++;
}
}
