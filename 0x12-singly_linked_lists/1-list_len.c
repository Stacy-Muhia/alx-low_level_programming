#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
  *list_len - function that returns the number of elements
  *in a linked list_t list.
  *@h: The head of the list
  *
  *Return: Number of elements of te list.
  */
size_t list_len(const list_t *h)
{
	size_t x = 0;

	while (h)
	{
		x++;
		h = h->next;
	}
	return (x);
}
