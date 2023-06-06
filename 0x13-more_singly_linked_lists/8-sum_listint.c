#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *sum_listint - functions to returns the sum of all the
  *data (n) of a listint_t linked list.
  *@head: the pointer to the head of the linked list
  *
  *Return: the sum of all the data (n), else 0(if the list is empty)
  */
int sum_listint(listint_t *head)
{
	listint_t *tem = head;
	int sum = 0;

	while (tem != NULL)
	{
		sum += tem->n;
		tem = tem->next;
	}
	return (sum);
}
