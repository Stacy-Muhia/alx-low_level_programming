#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
  *struct dog - The  dog's information
  *@name: The name of the dog
  *@age: The age of the dog
  *@owner: The owner of the dog
  *
  *Description: The dog's details
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif
