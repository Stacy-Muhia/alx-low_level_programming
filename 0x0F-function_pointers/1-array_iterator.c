#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - function that executes a function
 *given as a parameter on each element of an array
 *@array: array of integers
 *@size: size of the array
 *@action: pointer to function to be executed
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
