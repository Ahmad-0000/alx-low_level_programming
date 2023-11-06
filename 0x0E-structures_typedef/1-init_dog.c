#include "dog.h"
/**
 * init_dog -  is a function to initalize a structure to
 *	hold a dog information
 * @d: is a pointer to the structure
 * @name: is the dog name
 * @age: is the dog age
 * @owner: is the owner name
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}
