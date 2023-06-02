#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
  *print_list -  The function in charge of printing all elements of list_t list
  *@h: pointer to head of the lisst
  *
  *Description: singly linked list node structures
  *Return: the number of nodes
  */
size_t print_list(const list_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("%s\n", h->str);

		h = h->next;
		a++;
	}
	return (a);
}
