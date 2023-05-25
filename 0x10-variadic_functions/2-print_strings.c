#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function that prints strings, followed by a new line
 *@separator: The string to separate strings.
 *@n: The number of strings passed.
 *@...: A number of strings passed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ar;
	char *str;
	unsigned int x;

	va_start(ar, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(ar, char *);

		if (str != NULL)
			printf("%s", str);
		else
			printf("(nil)");

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(ar);
}
