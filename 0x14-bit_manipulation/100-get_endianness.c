#include "main.h"

/**
 *get_endianness - functions to check the endianness.
 *
 *Return: 0 for big,else 1 for little endian
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return (*c);
}
