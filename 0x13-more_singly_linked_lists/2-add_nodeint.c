#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  *add_nodeint - A function that adds a new node 
  *at the beginning of a listint_t list.
  *@head: Pointer to a pointer to the head of the linked list..
  *n: he value to be added to the new node.
  *
  *Return: The address of the new element, else NULL(fail)
  */
listint_t *add_nodeint(listint_t **head, const int n)
{

