#include "main.h"

/**
  *get_bit - Functions to return the value of a bit at a given index.
  *@n: input
  *@index: Index of the bit to be retrieved.
  *
  *Return: The value of the bit at index index or -1 if an error occurred.
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int x;

	if (index > 63)
		return (-1);

	x = (n >> index) & 1;

	return (x);
}
