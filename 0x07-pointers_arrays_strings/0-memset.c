#include <stdio.h>

/**
  *_memset-fills memory with a constant byte
  *@s: points number of bytes of memory
  *@b: the constant byte
  *@n: number of bytes of the memory area
  *
  *Return: changed array with new value for n bytes
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		s[x] = b;
		n--;
	}
	return (s);
}
