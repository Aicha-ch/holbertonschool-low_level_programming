#include "main.h"
#include <string.h>
/**
 * rev_string - a function that reverses a string
 * @s: pointer to character
 * Return: void
 */
void rev_string(char *s)
{
	int i, j;
	int len = strlen (s);
	char tmp;

	for (i = len - 1, j = 0; i > j; i--, j++)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
}
