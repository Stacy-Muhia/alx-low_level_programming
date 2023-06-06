#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - A function that adds a new node
  *at the beginning of a listint_t list.
  *@head: Pointer to a pointer to the head of the linked list..
  *@n: the value to be added to the new node.
  *
  *Return: The address of the new element, else NULL(fail)
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
