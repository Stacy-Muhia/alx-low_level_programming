#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *sum_them_all - does the calculations of the sum of all its paramters.
 *@n: The number of paramters used.
 *
 *Return: sum of all parameters,else if n == 0, return 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ar;
	unsigned int x;
	int sum = 0;

	va_start(ar, n);

	for (x = 0; x < n; x++)
		sum += va_arg(ar, int);

	va_end(ar);

	return (sum);
}
