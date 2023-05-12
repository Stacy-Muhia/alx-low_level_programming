#include "main.h"
#include <stdio.h>
/**
  *main - Entry point
  *@argc: The number of command line arguments
  *@argv: An array containing the program command line arguments
  *
  *Return: Always 0.(Success)
  */
int main(int argc, char *argv[])
{
	int x = 0;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}
	return (0);
}
