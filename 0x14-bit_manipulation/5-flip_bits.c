#include "main.h"

/**
  *flip_bits - functions to return the number of bits you would
  *need to flip to get from one number to another
  *@n: The first no.
  *@m: The second no.
  *
  *Return: number of bits.
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bin;

	for (bin = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bin++;
	}

	return (bin);
}
