#include "main.h"

/**
  *append_text_to_file - Functions to append text at the end of a file.
  *@filename: The name of the file
  *@text_content: The actual content of the file
  *
  *Return: 1 if the file exists. -1 if the fails does not exist
  *or it happens to fail
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, nletter = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nletter = 0; text_content[nletter];)
			nletter++;
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wr = write(op, text_content, nletter);

	if (op == -1 || wr == -1)
		return (-1);

	close(op);
	return (1);
}
