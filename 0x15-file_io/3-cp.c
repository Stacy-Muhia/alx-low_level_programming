#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *open_file - functions to check if a particular file opens or not
  *@begin_file: from beginning of file.
  *@end_file: end of file
  *@argv: arguments vector.
  *Return: no return.
  */
void open_file(int begin_file, int end_file, char *argv[])
{
	if (begin_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (end_file == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
  *main - Entry point
  *@argc: number of arguments.
  *@argv: arguments vector.
  *Return: Always 0.
  */
int main(int argc, char *argv[])
{
	int begin_file, end_file, err_close;
	ssize_t chars, nwr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp begin_file end_file");
		exit(97);
	}

	begin_file = open(argv[1], O_RDONLY);
	end_file = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	open_file(begin_file, end_file, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(begin_file, buf, 1024);
		if (chars == -1)
			open_file(-1, 0, argv);
		nwr = write(end_file, buf, chars);
		if (nwr == -1)
			open_file(0, -1, argv);
	}

	err_close = close(begin_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", begin_file);
		exit(100);
	}

	err_close = close(end_file);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", begin_file);
		exit(100);
	}
	return (0);
}
