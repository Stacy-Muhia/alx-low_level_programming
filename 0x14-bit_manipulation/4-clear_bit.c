#include "main.h"

/**
  *clear_bit - functions to set the value of a bit to 0 at a given index.
  *@n: number to set
  *@index: index of the bit you want to set
  *
  *Return: 1(success), else -1(error)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = ~(1 << index);
	*n = *n & x;
	return (1);
}
