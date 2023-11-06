#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - is a function to return a pointer
 * @name: is a name
 * @age: is an age
 * @owner: is an owner
 * Return: is to retrun a value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	dog_t *A = malloc(sizeof(dog_t));

	if (A == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		;
	A->name = malloc(sizeof(*name) * (i + 1));
	if (A->name == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		A->name[i] = name[i];
	A->name[i] = '\0';
	for (i = 0; owner[i] != '\0'; i++)
		;
	A->owner = malloc(sizeof(*owner) * (i + 1));
	if (A->owner == NULL)
		return (NULL);
	for (i = 0; owner[i] != '\0'; i++)
		A->owner[i] = owner[i];
	A->owner[i] = '\0';
	A->age = age;
	return (A);
}
