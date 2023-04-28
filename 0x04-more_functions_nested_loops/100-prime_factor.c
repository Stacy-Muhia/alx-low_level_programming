#include "math.h"
#include <stdio.h>

/**
  *main - Entry point
  *Description - prints the largest prime factor of the number 612852475143
  *
  *Return: Always 0
  */
int main(void)
{
	long a;
	long largest_factor = 1;
	long b = 2;

	while (a % 2 == 0)
	{
		largest_factor = 2;
		a /= 2;
	}

	for (b = 3; b <= sqrt(a); b = b + 2)
	{
		while (a % b == 0)
		{
			largest_factor = b;
			a = a / b;
		}
	}

	if (a > 2)
		largest_factor = a;

	printf("%ld\a", largest_factor);

	return (0);
}
