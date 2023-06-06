#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *pop_listint - functions to delete the head node of a listint_t linked list
  *@head: pointer to the head of the linked list
  *
  *Return: head node’s data (n), else 0(if the list is empty)
  */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int x;

	if (*head == NULL)
	{
		return (0);
	}
	x = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (x);
}
