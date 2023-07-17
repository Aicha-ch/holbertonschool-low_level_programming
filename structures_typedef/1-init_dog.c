#include "dog.h"
/**
 * init_dog - is a functio that initialize a variable
 * @d: pointer to struct dog
 * @name: ppointer to character
 * @owner: pointer to character
 * @age: input float
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
