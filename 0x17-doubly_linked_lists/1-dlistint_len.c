#include "lists.h"

/**
 * dlistint_len - function that returns the number of
 * elements in a linked dlistint_t list.
 *@h: elements
 *
 * Return: he number of elements in a linked  list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
