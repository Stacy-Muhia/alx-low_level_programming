#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  *print_all -  function that prints everything
  *@format: list of types of arguments passed to the function
  *c: char
  *i: integer
  *f: float
  *s: char * (if the string is NULL, print (nil) instead
  *
  *Return: void
  */
void print_all(const char * const format, ...)
{
	va_list arg;
	int i = 0;
	char *str, *s = "";

	va_start(arg, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", s, va_arg(arg, int));
					break;
				case 'i':
					printf("%s%d", s, va_arg(arg, int));
					break;
				case 'f':
					printf("%s%f", s, va_arg(arg, double));
					break;
				case 's':
					str = va_arg(arg, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", s, str);
					break;
				default:
					i++;
					continue;
			}
			s = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(arg);
}
