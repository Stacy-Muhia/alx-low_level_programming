#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using the Interpolation search
 *
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: the first index where value is located,
 * otherwise -1 if value is not present in array or if array is NULL
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t lo;
	size_t hi = size - 1;
	int pos;

	if (array == NULL)
		return (-1);

	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		if (lo == hi)
		{
			if (array[lo] == value)
				return (lo);
			return (-1);
		}
		pos = lo + (
				((double)(hi - lo) / (array[hi] - array[lo])) * (
				value - array[lo]));

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
