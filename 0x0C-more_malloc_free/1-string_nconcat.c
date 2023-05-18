#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
  *string_nconcat -  function that concatenates two strings
  *@s1: string to append to
  *@s2: string to concatenate from
  *@n: number of bytes from s2 to concatenate to s1
  *
  *Return: pointer to the resulting string,else NULL(if function fails)
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int a = 0, b = 0, l1 = 0, l2 = 0;

	while (s1 && s1[l1])
		l1++;
	while (s2 && s2[l2])
		l2++;

	if (n < l2)
		x = malloc(sizeof(char) * (l1 + n + 1));
	else
		x = malloc(sizeof(char) * (l1 + l2 + 1));

	if (!x)
		return (NULL);

	while (a < l1)
	{
		x[a] = s1[a];
		a++;
	}

	while (n < l2 && a < (l1 + n))
		x[a++] = s2[b++];

	while (n >= l2 && a < (l1 + l2))
		x[a++] = s2[b++];

	x[a] = '\0';

	return (x);
}
