#include "main.h"
#include <stdlib.h>
/**
  *_strdup - returns a pointer to a newly allocated space in memory
  *containing a  copy of the string given as parameter.
  *@str: string to copy
  *
  *Return: pointer to the duplicated string(success), Else NULL(fail)
  */
char *_strdup(char *str)
{
	char *copy;
	int x = 0;

	if (str == NULL)
		return (NULL);

	x = 0;
	while (str[x] != '\0')
		x++;

	copy = malloc(sizeof(char) * (x + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (x = 0; str[x]; x++)
		copy[x] = str[x];
	return (copy);
}
