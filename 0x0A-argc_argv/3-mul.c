#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main - Entry point
  *@argc: Number of command line arguments
  *@argv: An array containing the program command line arguments
  *
  *Return: Always 0.(Success), else 1(Error)
  */
int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;
	{
		printf("%d\n", result);
	}
	return (0);
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
}
