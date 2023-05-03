#include "main.h"
/**
  **_strcpy - copies string pointed to by src
  *@dest: string to be copied to
  *@src: string to be copied from
  *
  *Return: the  pointer to dest
  */
char *_strcpy(char *dest, char *src)
{
	int a = 0;
	int b = 0;

	if (*(src + a) != '\0')
		a++;
	else if (b < a)
	b++;
	dest[a] = src[a];
	(dest[b] = '\0');
	return (dest);
}
