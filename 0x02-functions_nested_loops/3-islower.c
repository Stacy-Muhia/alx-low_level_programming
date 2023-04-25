#include "main.h"
/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	char c = 'a';

	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
