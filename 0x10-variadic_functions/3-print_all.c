#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - function that prints anything
 *@format: list of types of arguments passed to the function
 *@...: The variable number of arguments to be printed
 */
void print_all(const char * const format, ...)
{
	va_list ar;
	int x = 0;
	const char *str, *sr = "";

	va_start(ar, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sr, va_arg(ar, int));
					break;
				case 'x':
					printf("%s%d", sr, va_arg(ar, int));
					break;
				case 'f':
					printf("%s%f", sr, va_arg(ar, double));
					break;
				case 's':
					str = va_arg(ar, char *);
					if (str != NULL)
						printf("%s%s", sr, str);
					else
						printf("(nil)");
					break;
				default:
					x++;
					continue;
			}
			sr = ", ";
			x++;
		}
	}
	printf("\n");

	va_end(ar);
}
