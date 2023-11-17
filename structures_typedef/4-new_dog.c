#include "dog.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * new_dog - create a new dog
 *
 * @name: new name
 *
 * @age: new age
 *
 * @owner: new owner
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *new_name;
	char *new_owner;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_name = malloc(sizeof(strlen(name)) + 1);
	if (new_name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_owner = malloc(sizeof(strlen(owner)) + 1);
	if (new_owner == NULL)
	{
		free(new_dog);
		free(new_name);
		return (NULL);
	}
	strcpy(new_name, name);
	strcpy(new_owner, owner);
	new_dog->name = new_name;
	new_dog->age = age;
	new_dog->owner = new_owner;
	return (new_dog);
}
