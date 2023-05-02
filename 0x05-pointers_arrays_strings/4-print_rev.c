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
	if (*s != '\0')
	{
		print_rev(s + 1);
	}
	{
		_putchar(*s);
	}
	else
	{
		_putchar('\n');
	}
}
