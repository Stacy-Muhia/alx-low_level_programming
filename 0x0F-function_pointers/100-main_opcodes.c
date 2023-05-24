#include <stdio.h>
#include <stdlib.h>

/**
 *main - program that prints the opcodes of its own main function
 *@argc: the number of arguments
 *@argv: the array of arguments
 *
 *Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, x;
	char *ray;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	ray = (char *)main;

	for (x = 0; x < bytes; x++)
	{
		if (x == bytes - 1)
		{
			printf("%02hhx\n", ray[x]);
			break;
		}
		printf("%02hhx ", ray[x]);
	}
	return (0);
}
