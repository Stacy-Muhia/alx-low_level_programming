#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - initializes a struct dog
  *@d: pointer to struct dog variable
  *@name: The name of the dog
  *@age: The age of the dog
  *@owner: The owner of the dog
  *
  *Description: Int a struct dog
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
