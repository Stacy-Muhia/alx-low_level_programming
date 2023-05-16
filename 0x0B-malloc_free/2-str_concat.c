#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
  *str_concat - function that concatenates two strings
  *@s1: input string one
  *@s2: input string two
  *
  *Return: A pointer to the concatenated string(Success), else NULL(fail)
  */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	unsigned int x = 0;
	unsigned int y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[x] != '\0')
		x++;
	while (s2[y] != '\0')
		y++;
	concat = malloc(sizeof(char) * (x + y + 1));
	if (concat == NULL)
		return (NULL);
	while (s1[x] != '\0')
	{
		concat[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		concat[x++] = s2[y];
		x++, y++;
	}
	concat[x] = '\0';
	strcpy(concat, s1);
	strcat(concat, s2);
	return (concat);
}
