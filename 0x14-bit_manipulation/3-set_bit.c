#include "main.h"

/**
  *set_bit - functions to set value of a bit to 1 at a given index.
  *@n: Unsigned long int number
  *@index: index of the bit for retrieval
  *
  *Return: 1 if it worked, else -1(error)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 63)
		return (-1);

	x = 1 << index;
	*n = (*n | x);

	return (1);
}
