#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
  *print_listint - function used to print all elements of the listint_t list
  *@h: The pointer to the head of the list
  *@n: integer
  *
  *Return: The number of nodes
  */
size_t print_listint(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		x++;
		h = h->next;
	}
	return (x);
}
