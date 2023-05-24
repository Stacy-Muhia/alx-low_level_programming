#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *@array: array of integers
 *@size: size of elements in array
 *@cmp: pointer to the comparision pointer
 *Return: If no element matches, return -1,else if size <= 0, return -1,
 *else the index of the first element for which cmp function does not return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
