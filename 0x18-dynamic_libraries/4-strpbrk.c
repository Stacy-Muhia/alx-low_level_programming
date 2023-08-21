#include "main.h"
/**
  *_strpbrk - searches string for any set of bytes
  *@s: the string
  *@accept: the set of bytes to be searched for
  *
  *Return: Always 0.(Success)
  */
char *_strpbrk(char *s, char *accept)
{
	int x, y = 0;

	for (x = 0; s[x]; x++)
	{
		for (y = 0; y[accept] != '\0'; y++)
		{
			if (s[x] == y[accept])
				return (&s[x]);
		}
	}
	return ('\0');
}
