#include "dog.h"
#include <string.h>
#include <stdlib.h>
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
	int len1 = strlen(name);
	int len2 = strlen(owner);
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
