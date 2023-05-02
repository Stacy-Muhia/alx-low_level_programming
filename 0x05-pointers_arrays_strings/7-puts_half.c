#include "main.h"
/**
  *puts_half - function that printshalf a string
  *@str: Input string
  *
  *Return: Half the input
  */
void puts_half(char *str)
{
	int x, y, length;

	x = 0;
	length = 0;
	{
		while (str[x++])
			length++;
	}
	if (length % 2 == 0)
	{
		y = length / 2;
	}
	else
	{
		y = (length + 1) / 2;
	}
	for (x = y; x < length; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
