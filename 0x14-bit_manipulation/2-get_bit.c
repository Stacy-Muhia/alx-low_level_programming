#include "main.h"

/**
  *get_bit - functions to return the value of a bit at a given index.
  *@n: unsigned long int input.
  *@index: index of the bit
  *
  *Return: value of the bit,else -1(error)
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}
