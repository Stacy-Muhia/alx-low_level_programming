#include <stdio.h>
#include "main.h"
/**
  *main - enrty point
  *@argc: Number of command line arguments
  *@argv: An array containing the program command line arguments
  *
  *Return: always 0(sucess)
  */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void) argc;
	return (0);
}
