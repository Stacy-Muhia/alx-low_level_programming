#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
  *main - Entry point
  *@argc: Number of command line arguments
  *@argv: An array containing the program command line arguments
  *
  *Return: 0(success), else 1(Error)
  */
int main(int argc, char *argv[])
{
	int x = 1;
	int y = 0;
	int sum;

	for (x = 1; x < argc; x++)
	{
		for (y = 0; argv[x][y] != '\0'; y++)
		{
			if (!isdigit(argv[x][y]))
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	sum = x + y;
	printf("%d\n", sum);
	return (0);
}
