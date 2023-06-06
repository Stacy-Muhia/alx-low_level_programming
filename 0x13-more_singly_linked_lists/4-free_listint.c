#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *free_listint - functions to free a listint_t list.
  *@head: pointer to the head of the linked list
  *
  */
void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head != NULL)
	{
		tem = head;
		head = head->next;
		free(tem);
	}
}
