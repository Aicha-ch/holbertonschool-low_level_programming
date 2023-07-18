#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - is a function that returns the length of a string
 * @s: pointer to a character
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * new_dog -  a function that creates a new dog
 * @name: pointer to character
 * @age: input float
 * @owner: pointer to character
 * Return: pointer to structure
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1 = _strlen(name);
	int len2 = _strlen(owner);
	int i;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc((sizeof(char) * len1) + 1);
	if (d == NULL)
	{
		free(d);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		d->name[i] = name[i];
	}
	d->name[len1] = '\0';

	d->age = age;

	d->owner = malloc(sizeof(char) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	for (i = 0; i < len2; i++)
	{
		d->owner[i] = owner[i];
	}
	d->owner[len2] = '\0';
	return (d);
}
