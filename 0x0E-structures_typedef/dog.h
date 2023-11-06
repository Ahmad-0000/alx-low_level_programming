#ifndef THIS_FILE
#define THIS_FILE
/**
 * struct dog - is a structure to hold information about dog @name: is the dog
 * name
 * @age: is the dog age
 * @owner: is the owner name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - I hate this project
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
