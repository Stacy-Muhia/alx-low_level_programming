#include <stdio.h>
/**
  *main - Entry point
  *Description - alphabet in lowercase and then in uppercase
  *Return: Always 0 (Success)
  */
int main(void)
{
	char letter1 = 'a';
	char letter2 = 'A';

	while (letter1 <= 'z')
	{
		putchar(letter1);
		letter1++;
	}
	while (letter2 <= 'Z')
	{
		putchar(letter2);
		letter2++;
	}
	putchar('\n');
	return (0);
}
