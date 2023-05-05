#include "main.h"
/**
  *_strncat - unction that concatenates two strings
  *@dest: pointer to destination string
  *@src: pointer to source string
  *@n: input
  *
  *Return: dest
  */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
		;
		b = 0;
		while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
