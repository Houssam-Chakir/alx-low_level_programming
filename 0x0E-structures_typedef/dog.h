#ifndef DOG_GUARD
#define DOG_GUARD

int _strlen(char *str);
char *_strcpy(char *dest, char *src);

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

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
