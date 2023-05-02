#include "main.h"
/**
  *puts2 - function that prints every  character of a string
  *@str: The input reference string
  *
  *Return: 0
  */
void puts2(char *str)
{
	int length = 0;
	int a = 0;
	char *s = str;
	int b;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	a = length - 1;
	for (b = 0 ; b <= a ; b++)
	{
		if (b % 2 == 0)
	{
		_putchar(str[b]);
	}
	}
	_putchar('\n');
}
