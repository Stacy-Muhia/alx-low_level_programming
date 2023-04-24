#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int a = 0;

	while (int a < 10)
	{
		putchar(a + '0');
		a++;
	}
	putchar('\n');
	return (0);
}
