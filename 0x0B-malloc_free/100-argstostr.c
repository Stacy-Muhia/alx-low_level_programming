#include "main.h"
#include <stdlib.h>
/**
 *argstostr - function that concatenates all the arguments of your program
 *@ac: Arguments
 *@av: Array containing string
 *Return: A pointer to the concatenated string, esle NULL(fail)
 */
char *argstostr(int ac, char **av)
{
	char *concat;
	int length = 0, x, y, z  = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y]; y++)
			length++;
	}
	length += ac;

	concat = malloc(sizeof(char) * length + 1);
	if (concat == NULL)
		return (NULL);
	for (x = 0; x < ac; x++)
	{
	for (y = 0; av[x][y]; y++)
	{
		concat[z] = av[x][y];
		z++;
	}
	if (concat[z] == '\0')
	{
		concat[z++] = '\n';
	}
	}
	return (concat);
}
