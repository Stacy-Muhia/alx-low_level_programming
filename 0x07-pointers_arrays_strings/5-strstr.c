#include "main.h"
/**
  *_strstr - locates a substring
  *@haystack: string
  *@needle: substring
  *
  *Return: Always 0.(Sucess)
  */
char *_strstr(char *haystack, char *needle)
{
	int x, y = 0;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; haystack[x+y] == needle[y] && needle[y] != '\0'; y++)
			;
		if (needle[y] == '\0')
			return (haystack);
	}
	return ('\0');
}
