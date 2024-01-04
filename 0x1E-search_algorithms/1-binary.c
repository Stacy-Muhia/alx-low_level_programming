#include "search_algos.h"

/**
 * binary_search - functions to search value using binary search algorithm
 * @array: pointer to first element
 * @size: exact number of elements in array
 * @value: value being searched for
 *
 * Return: the first index where value is located or -1
*/

int binary_search(int *array, size_t size, int value)
{
	int m;
	size_t x = 0, i;
	size_t y = size - 1;

	if (array == NULL)
		return (-1);

	while (x <= y)
	{
		printf("searching in array:");
		for (i = x; i < y; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[y]);

		m = ceil(x + (y - x) / 2);

		if (array[m] == value)
			return (m);

		if (array[m] <  value)
			x = m + 1;

		else
			y = m - 1;
	}
	return (-1);
}
