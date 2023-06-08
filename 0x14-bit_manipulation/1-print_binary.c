#include <stdio.h>
#include "main.h"

/**
  *print_binary - functions to print the binary representation of a number.
  *@n: number to be printed in binary
  *
  */
void print_binary(unsigned long int n)
{
	int y, count = 0;
	unsigned long int temp;

	for (y = 63; y >= 0; y--)
	{
		temp = n >> y;

		if (temp & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
