#include <stdio.h>
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n = 0;
	char letter = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
