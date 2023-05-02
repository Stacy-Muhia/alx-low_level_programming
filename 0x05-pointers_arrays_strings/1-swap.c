#include "main.h"
/**
  *swap_int - function that swaps two integers
  *@a: integer to swap
  *@b: integer to swap
  *Return: Always 0.
  */
void swap_int(int *a, int *b)
{
	int change;

	change = *a;
	*a = *b;
	*b = change;
}
