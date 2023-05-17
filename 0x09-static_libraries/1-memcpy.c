#include "main.h"
/**
  *_memcpy-function that copies memory area
  *@dest: The memory area where it is copied
  *@src: The memory area where it is stored
  *@n: The input
  *
  *Return: dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; n > 0; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
