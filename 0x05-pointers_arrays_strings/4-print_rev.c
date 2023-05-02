#include "main.h"
/**
  *print_rev - function that prints string in reverse
  *then new line
  *@s: the string used
  *
  *Return: 0
  */
void print_rev(char *s)
{
	int length = 0;
	int x;

	while (*s != 0)
	{
		length++;
		s++;
	}
	s--;
	for (x = legth; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
