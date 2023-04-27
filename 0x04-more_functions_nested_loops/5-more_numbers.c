#include "main.h"
/**
  *more_numbers - prints 10 times the numbers from 0 to 14
  *
  *Return: Always 0
  */
void more_numbers(void)
{
	int m, n;

	for (m = 1; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n >= 10)
				_putchar('1');
			_putchar (n % 10 + '0');
		}
		_putchar('\n');
	}
}

