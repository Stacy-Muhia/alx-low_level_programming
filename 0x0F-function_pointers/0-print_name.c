#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - prints a name
 *@name: The name to be printed
 *@f: pointer to print function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
