#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  *read_textfile - functions to read a particular text then prints the letters
  *@filename: The name of the file.
  *@letters: The specific number of letters to beprinted.
  *
  *Return: numbers of letters printed, else 0.(Fail)
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t r, w;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	r = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, r);

	close(fd);

	free(buf);

	return (w);
}
