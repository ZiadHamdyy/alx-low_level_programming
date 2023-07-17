#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -  creates a new dog.
 * @name:dogs name.
 * @age:dogs age.
 * @owner:dogs owner name.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *name_copy = malloc(sizeof(char) * (strlen(name) + 1));
	char *owner_copy = malloc(sizeof(char) * (strlen(owner) + 1));

	dog_t *new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		return (NULL);
	}
	if (name_copy == NULL || owner_copy == NULL)
	{
		free(new_dog);
		free(name_copy);
		free(owner_copy);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	new_dog->name = name_copy;
	new_dog->age = age;
	new_dog->owner = owner_copy;
	return (new_dog);
}
