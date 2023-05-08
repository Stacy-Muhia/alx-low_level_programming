#include "main.h"
#include <stddef.h>
/**
  *_strchr-locates a character in a string
  *@s: string
  *@c: input character
  *
  *Return: pointer to the first occurrence if c is found, else NULL
  */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (NULL);
}
