#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop_listint - deletes the head node.
 * @head: pointer to head pointer.
 * Return: the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
	int i = 0;
	listint_t *pop_node;

	if (head == NULL)
		return (0);
	if (*head == NULL)
		return (0);
	pop_node = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(pop_node);
	return (i);
}
