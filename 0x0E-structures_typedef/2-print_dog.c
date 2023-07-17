#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints doc info
 * @d: pointer to dog struct
 *
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
