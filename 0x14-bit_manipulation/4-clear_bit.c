#include "main.h"

/**
  *clear_bit - functions to set the value of a bit to 0 at a given index.
  *@n: The unsigned long int number.
  *@index: Index of the bit to be retrieved.
  *
  *Return: 1 if it worked, or -1 if an error occurred.
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > 63)
		return (-1);

	mask = 1 << index;

	if (*n & mask)
		*n ^= mask;

	return (1);
}
