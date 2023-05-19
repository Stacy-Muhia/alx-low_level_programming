#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  **_memset - fills memory with a constant byte
  *@s: memory area to be filled
  *@c: character to  be copied
  *@n: number of times to copy c
  *
  *Return: pointer to the memory area s
  */
char *_memset(char *s, char c, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		s[x] = c;
	}
	return (x);
}
/**
  *_calloc - unction that allocates memory for an array, using malloc
  *@nmemb: the number of elements  the array
  *@size: size of element
  *
  *Return: pointer to allocated memory(Success), else NULL(fail)
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}
