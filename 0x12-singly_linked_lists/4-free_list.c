#include <stdlib.h>
#include "lists.h"

/**
  *free_list - function that frees a list_t list.
  *@head: Apointer to the head of the list of a linked list
  *
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
