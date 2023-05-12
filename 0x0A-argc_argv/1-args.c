#include "main.h"
#include <stdio.h>
/**
  *main - Entry point
  *@argc: Number of command line arguments
  *@argv: An array containing the program command line arguments
  *
  *Return: 0(success) , else non-zero(failure)
  */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	(void) argv;

	return (0);
}
