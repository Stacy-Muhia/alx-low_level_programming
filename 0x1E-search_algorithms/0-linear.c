#include "search_algos.h"

/**
  * linear_search - unction that searches for a value in an array of integers
  * @array: pointer to first element in search array
  * @size: number of elements in array
  * @value: value to be searched
  *
  * Return: index where found or -1
  */

int linear_search(int *array, size_t size, int value)
{
	unsigned int j;

	if (array == NULL)
		return (-1);
	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}
	return (-1);
}
