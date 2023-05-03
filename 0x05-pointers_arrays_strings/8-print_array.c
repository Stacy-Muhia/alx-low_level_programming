#include "main.h"
/**
  *print_array - prints n elements of an array of integers
  *@a: Input array
  *@n: number of element of array
  *
  *Return: a , n inputs
  */
void print_array(int *a, int n)
{
	int ioa;

	for (ioa = 0; ioa < n; ioa++)
	{
		printf("%d", (a[ioa]));
		if (ioa != n - 1)
			printf(", ");
	}
	printf("\n");
}
