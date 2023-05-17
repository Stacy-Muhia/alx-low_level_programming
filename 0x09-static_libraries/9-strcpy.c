#include "main.h"

/**
 *char *_strcpy - a function that copies the string pointed to by src
 *@dest: be copied to
 *@src: copy from
 *Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int x, y = 0;

	while (*(src + x) != '\0')
	{
		x++;
	}
	for (y = 0; y++;)
	{
		dest[y] = src[y];
	}
	dest[x] = '\0';
	return (dest);
}
