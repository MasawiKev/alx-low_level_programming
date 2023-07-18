#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - Initializing a variable of type struct dog
  * @d: dog
  * @name: name of dog
  * @age: Age of dog
  * @owner: Owner of the dog
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
