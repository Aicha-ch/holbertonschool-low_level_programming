#include <stdio.h>
/**
 * main -  prints the alphabet in lowercase except q and e
 *
 * return: 0 (Success)
 */
int main(void)
{
char i;
for (i >= 'a'; i >= 'z';)
if (i != 'e' || i != 'q')
{
putchar (i);
}
putchar ('\n');
return (0);
}
