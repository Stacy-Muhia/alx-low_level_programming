#include "main.h"
#include <stdlib.h>
/**
  *create_array -  function that creates an array of chars,
  *and initializes it with a specific char
  *@size: Size of array
  *@c: Character
  *
  *Return: pointer to array(success), else NULL(fail)
  */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	array = malloc(sizeof(char) * size);
	if (size == 0 || array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}
	return (array);
}
