#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *get_nodeint_at_index - Functions to return the nth
  *node of a listint_t linked list.
  *@head: the pointer to the head of the linked list
  *@index: Index of the node
  *
  *Return: Pointer to the nth node, else NULL(if node doesn't exist.)
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tem = head;

	for (i = 0; tem != NULL; i++)
	{
		if (i == index)
		{
			return (tem);
		}
	tem = tem->next;
	}
	return (NULL);
}
