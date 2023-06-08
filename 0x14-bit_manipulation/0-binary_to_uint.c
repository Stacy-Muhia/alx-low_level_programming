#include <stddef.h>
#include "main.h"

/**
  *binary_to_uint - functions to convert a binary number to an unsigned int.
  *@b: points to a string of 0 and 1 char
  *
  *Return: the converted number, else 0(if 1 0 or more chars that is not 0 or 1
  *and b  is NULL)
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x;

	if (b == NULL)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] == '0')
		{
			result = (result << 1);
		}
		else if (b[x] == '1')
		{
			result = (result << 1) | 1;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
