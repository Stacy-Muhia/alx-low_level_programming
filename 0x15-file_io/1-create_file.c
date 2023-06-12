#include <stdio.h>
#include "main.h"

/**
  *_strlen - Function to give the length of a string
  *@s: input character
  *
  *Return: length of a string
**/
int _strlen(char *s)
{
	int x = 0;

	while (s[x])
	{
		x++;
	}
	return (x);
}
/**
  *create_file - functions to create a function that creates a file.
  *@filename: The actual name of the file.
  *@text_content: the contents of the file
  *Return: 1, else -1(failure)
  */
int create_file(const char *filename, char *text_content)
{
	ssize_t nlen;
	int file;

	if (!filename)
		return (1);
	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		nlen = write(file, text_content, _strlen(text_content));
		if (nlen == -1)
		{
			close(file);
			return (-1);
		}
	}
	close(file);
	return (1);
}
