#include "main.h"

/**
  *flip_bits - Functions to return the number of bits
  *one would need to flip to get from one number to another.
  *@n: unsigned long int number
  *@m: unsigned long int
  *
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int mask;

	for (mask = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			mask++;
	}
	return (mask);
}
