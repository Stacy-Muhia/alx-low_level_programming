#include "main.h"
/**
  *_strncpy - function that copies a string
  *@dest: pointer to destination string
  *@src: pointer to source string
  *@n: iinput value
  *
  *Return: dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int z;

	for (z = 0; z < n && src[z] != '\0'; z++)
	{
		dest[z] = src[z];
	}
	while (z < n)
	{
		dest[z] = '\0';
		z++;
	}
	return (dest);
}
