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
	int i = 0;
	const char *str, *sr = "";

	va_start(ar, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sr, va_arg(ar, int));
					break;
				case 'i':
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
					i++;
					continue;
			}
			sr = ", ";
			i++;
		}
	}
	printf("\n");

	va_end(ar);
}
