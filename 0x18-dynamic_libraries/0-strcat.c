#include "main.h"
/**
  *_strcat -  concatenates two strings
  *@dest: input string
  *@src: input string
  *
  *Return: dest
  */
char *_strcat(char *dest, char *src)
{
	int x, y;

	for (x = 0; dest[x] != '\0'; x++)
		;
		y = 0;
		while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = '\0';
	return (dest);
}
