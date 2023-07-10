#include "main.h"

/**
  *append_text_to_file - functions to append a text at the end of a file.
  *@filename: The name of the file.
  *@text_content: the contents of the text.
  *
  *Return: 1 if the file exists. -1 if the fails doesn't exit or fails.
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int find;
	int letter;
	int rewr;

	if (!filename)
		return (-1);

	find = open(filename, O_WRONLY | O_APPEND);

	if (find == -1)
		return (-1);

	if (text_content)
	{
		for (letter = 0; text_content[letter]; letter++)
			;

		rewr = write(find, text_content, letter);

		if (rewr == -1)
			return (-1);
	}

	close(find);

	return (1);
}
