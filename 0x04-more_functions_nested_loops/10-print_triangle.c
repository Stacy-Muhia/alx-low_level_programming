#include "main.h"
/**
  *print_triangle - it prints a triangle then a new line
  *@size: size of triangle
  *
  */
void print_triangle(int size)
{
	int x, y;

	for (x = 1; x <= size; x++)
	{
		for (y = x; y <= size; y++)
		{
			_putchar(' ');
		}
		for (y = 1; y <= x; y++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
