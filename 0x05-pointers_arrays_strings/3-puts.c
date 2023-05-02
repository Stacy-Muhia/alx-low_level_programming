#include "main.h"
/**
  *_puts - function that prints a string then new line
  *@str: string to be printed
  *
  *Return: string followed by new line
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
