#ifndef DOG_GUARD
#define DOG_GUARD

/**
 * struct dog - info about a dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: its clear bruh
 */
struct dog
{
	char *name; /**< the dog name */
	float age; /**< dog age */
	char *owner; /**< owner name */
	/* ofc u can add more */
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
