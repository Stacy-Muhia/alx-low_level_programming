#include "main.h"
/**
  *rev_string - function that reverses a string
  *@s: string
  *
  *Return: String in reverse
  */
void rev_string(char *s)
{
	char reverse = s[0];
	int length = 0;
	int a;

	while (s[length] != '\0')
	length++;
	for (a = 0; a < length; a++)
	{
		length--;
		reverse = s[a];
		s[a] = s[length];
		s[length] = reverse;
	}
}
