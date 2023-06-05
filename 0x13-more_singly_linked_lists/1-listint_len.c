#include <stdio.h>
#include "lists.h"

/**
  *listint_len - A function that returns the number of elements 
  *in a linked listint_t list.
  *@h: pointer to the head of the list
  *
  *Return: The number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t x = 0;

	while (h != NULL)
	{
		x++;
		h = h->next;
	}
	return (x);
}
