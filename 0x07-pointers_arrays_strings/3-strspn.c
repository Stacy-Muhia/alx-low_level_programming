#include "main.h"
/**
  *_strspn - function that gets the length of a prefix substring
  *@s:input
  *@accept: input
  *
  *Return: number of bytes from initial segmentt of s
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y = 0;

	while (*s)
	{
		for (x = 0; accept[x]; x++)
		{
			if (*s == accept[x])
			{
				y++;
				break;
			}
			else if (accept[x + 1] == '\0')
				return (y);
		}
		s++;
	}
	return (y);
}
