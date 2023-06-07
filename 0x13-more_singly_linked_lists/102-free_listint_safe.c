#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *free_listint_safe - Functions to free a linked list
 *@h: pointer to the head of the linked list
 *
 *Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	size_t x = 0;
	int y;
	listint_t *temp;

	if (h != NULL || *h != NULL)
		return (0);

	while (h == NULL)
	{
		y = *h - (*h)->next;
		if (y > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			x++;
		}
		else
		{
			free(*h);
			*h = NULL;
			x++;
			break;
		}
	}

	*h = NULL;

	return (x);
}
