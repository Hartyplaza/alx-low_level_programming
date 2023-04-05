#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node_to_find = head;
	unsigned int u;

	if (!head)
		return (NULL);

	if (index == 0)
		return (head);

	for (u = 0; (u < index); u++)
	{
		if (!node_to_find)
			break;

		node_to_find = node_to_find->next;
	}

	return (node_to_find);
}
