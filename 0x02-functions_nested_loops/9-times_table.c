#include "main.h"
/**
  *times_table - prints 9 times table starting with 0
  *
  */
void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			int result = a * b;

			if (result > 9)
			{
				_putchar(result / 10 + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar(result % 10 + '0');

			if (b < 9)
			{_putchar(',');
			_putchar(' ');
			}
			else
			{
				_putchar('\n');
			}
		}
	}
}
