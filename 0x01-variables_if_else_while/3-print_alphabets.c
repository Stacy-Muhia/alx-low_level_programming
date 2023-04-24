#include <stdio.h>
/**
  *main - Entry point
  *Description - alphabet in lowercase and then in uppercase
  *Return: Always 0 (Success)
  */
int main(void)
{
	char letter = 'a';
	char letter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
	}
	while (letter <= 'Z')
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
