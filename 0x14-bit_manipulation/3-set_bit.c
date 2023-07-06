#include "main.h"

/**
  *set_bit - functions to set the value of a bit to 1 at a given index.
  *@n: pointer to the number to change
  *@index: index of bit you want to set
  *
  *Return: 1(success), -1(error)
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	x = 1 << index;
	*n = *n | x;
	return (1);
}
