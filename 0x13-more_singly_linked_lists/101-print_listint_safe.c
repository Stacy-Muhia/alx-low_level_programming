#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *print_listint_safe - Functions to print a listint_t linked list.
  *@head: the pointer to the head of the linked list
  *
  *Return: the number of nodes in the list,
  *else exit program with status 98(fail)
  */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	const listint_t *temp = head;
	const listint_t *node = NULL;

	while (!temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		x++;

	if (temp->next >= temp)
	{
		node = temp->next;
		break;
	}
	temp = temp->next;
	}
	if (node != NULL)
	{
		printf("-> [%p] %d\n", (void *)node, node->n);
		x++;
	}
	return (x);
}
