#include "main.h"
/**
  *print_alphabet_x10 - Print alphabet 10 times
  *
  *Return: Always 0 (Success)
  */
void print_alphabet_x10(void)
{
	int n;
	int l;

	for (n = 1; n <= 10 ; n++)
	{
		for (l = 97; l <= 122; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
