#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, and then in uppercase
 *
 * return: 0 (Success)
 */
int main(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
{
putchar (i);
}
for (i = 'A'; i <= 'Z'; i++)
{
putchar (i);
}
putchar ('\n');
return (0);
}
