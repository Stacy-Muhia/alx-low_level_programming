#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *insert_nodeint_at_index - functions to insert a new node at a given position
  *@head: the pointer to the head of the linked list
  *@idx: the index of the list where the new node should be added.
  *@n: Data for the new node.
  *
  *Return: address of the new node, eelse NULL(fail)
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL && head == NULL)
		return (NULL);

	newNode->n = n;
	newNode->next = NULL;

	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	for (x = 0; temp && x < idx; x++)
	{
		if (x == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
