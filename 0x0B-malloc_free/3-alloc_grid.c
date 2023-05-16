#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - nested loop to make grid
 *@width: width of grid
 *@height: height of grid
 *
 *Return: width or height is 0 or negative return NULL(fail)
 *else,a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
	int **g;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	g = malloc(sizeof(int *) * height);

	if (g == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		g[a] = malloc(sizeof(int) * width);

		if (g[a] == NULL)
		{
			for (; a >= 0; a--)
				free(g[a]);

			free(g);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			g[a][b] = 0;
	}

	return (g);
}
