#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: Pointer to the first node
 *
 * Return: 0 or the data iside the element that
 * was deleted
 */

int pop_listint(listint_t **head)
{
	listint_t *node_to_pop;
	int data;

	if (!(*head))
		return (0);

	node_to_pop = *head;

	data = (*head)->n;

	*head = (*head)->next;

	free(node_to_pop);

	return (data);
}
