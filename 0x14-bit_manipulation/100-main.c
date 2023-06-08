#include <stdio.h>
#include "main.h"
 /**
   *main - entry point
   *
   *Return: Always 0.(Success)
   */
int main(void)
{
	int n;

	n = get_endianness();
	if (n != 0)
	{
		printf("Little Endian\n");
	}
	else
	{
		printf("Big Endian\n");
	}
	return (0);
}
