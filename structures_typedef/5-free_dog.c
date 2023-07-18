#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - is a function that frees dogs
 * @d: pointer to structure dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
