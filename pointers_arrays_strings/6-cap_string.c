#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @str: pointer to char
 * Return: a pointer to a character
 */
char *cap_string(char *str)
{
	int i, j;
	char array[] = {
		' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'
	};

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = (str[i] - 32);
		else 
		{
			for (j = 0; array[j] != '\0'; j++)
			{
				if (str[i] == array[j])
				{
					if ((str[i + 1] >= 'a' && str[i + 1] <= 'z'))
					{
						str[i + 1] = (str[i + 1] - 32);
					}
				}
			}
		}
		i++;
	}
	return (str);
}
