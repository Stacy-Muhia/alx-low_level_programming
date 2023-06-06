#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint_end - The function responssible for adding
  *a new node at the end of a listint_t list.
  *@head: the pointer to the head of the linked list.
  *@n: The actual value to be added to the new node.
  *
  *Return: the address of the new element, else NULL(fail)
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *cur = *head;

	newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (cur->next != NULL)
	{
		cur = cur->next;
	}

	cur->next = newNode;

	return (newNode);
}
