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

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
