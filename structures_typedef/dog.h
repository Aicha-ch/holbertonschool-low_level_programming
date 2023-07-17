#ifndef _dog_h_
#define _dog_h_
/**
 * struct dog - structure
 * @name: first element
 * @age: second element
 * @owner: third element
 * description: structure containing three elements
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
