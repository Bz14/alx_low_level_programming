#include <stdio.h>
#include "dog.h"
#include "string.h"
#include <stdlib.h>
/**
 * *new_dog - defines a new dog
 * @name: name
 * @age: age
 * @owner: owner
 * Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_d;
	int len = strlen(name), l = strlen(owner);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
		return (NULL);
	new_d->name = malloc(sizeof(char) * (len + 1));
	if (new_d->name == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	new_d->owner = malloc(sizeof(char) * (l + 1));
	if (new_d->owner == NULL)
	{
		free(new_d->owner);
		free(new_d);
		return (NULL);
	}
	new_d->name = strcpy(new_d->name, name);
	new_d->age = age;
	new_d->owner = strcpy(new_d->owner, owner);
	return (new_d);
}
