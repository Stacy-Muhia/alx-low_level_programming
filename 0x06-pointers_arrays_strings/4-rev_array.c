#include "main.h"
/**
  *reverse_array - reverses the array of integers
  *@a: array of integers
  *@n: the number of elemments of array
  *
  *Return: void
  */
void reverse_array(int *a, int n)
{
	int x, y;

	x = 0;
	while (x < n--)
		x++;
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
