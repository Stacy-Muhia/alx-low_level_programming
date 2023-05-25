#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_numbers - function that prints numbers, followed by a new line
  *@separator: The string to be printed between numbers.
  *@n: The no. of integers passed to the function
  *
  *Return: void
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	unsigned int x;

	va_start(ar, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(ar, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ar);
}
