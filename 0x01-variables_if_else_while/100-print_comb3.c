#include <stdio.h>
/**
  *main - entry point
  *Description - prints all possible different combinations of two digits
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a, b;

	for (a = 0; a <= 8; a++)
	{
		for (b = 1; b <= 9; b++)
		{
			if (b < a)
			{
				putchar(a);
				putchar(b);
				if (a != 8 || b != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
