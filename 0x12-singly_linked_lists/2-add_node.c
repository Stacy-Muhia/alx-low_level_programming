#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  *add_node - function that adds a new node at the beginning of a list_t list
  *@head: a pointer to the head of a link in a linked string
  *@str: string to be dublicated
  *
  *Return: the address of the new element, else NULL(fail)
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	new_node->len = len;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
