#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initialize a variable of type struct dog.
 * @d:the data of the  dog.
 * @name:dogs name.
 * @age:dogs age.
 * @owner:dogs owner name.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d-> owner = owner;
	}
}
