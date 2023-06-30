#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @str: pointer to character
 * Return: pointer to char
 */
char *leet(char *str)
{
	int i, j;
	char a1[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char a2[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char a3[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; a1[j] != '\0' && a2[j] != '\0' && a3[j] != '\0'; j++)
		{
			if ((str[i] == a1[j]) || (str[i] == a2[j]))
			{
				str[i] = a3[j];
			}
		}
	}
	return (str);
}


