#include  "dog.h"
#include <stdio.h>

/**
 * print_dog - print struct
 * @d: pointer struct dog
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		printf("Name: %s\n", d->name);
	else
		printf("(nil)\n");
	printf("Age: %f\n", d->age);
	if (d->owner != NULL)
		printf("Owner: %s\n", d->owner);
	else
		printf("(nil)\n");
}
