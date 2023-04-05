#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @head: pointer to the first node in the list
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr = *head;
	listint_t *node_to_add;
	unsigned int x = 0;

	if (!(*head) && idx)
		return (NULL);
	if (idx == 0)
	{
		node_to_add = add_nodeint(&(*head), n);
		return (node_to_add);
	}
	node_to_add->n = n;

	while (x < (idx - 1))
	{
		if (!curr->next)
			return (NULL);
		curr = curr->next;
		x++;
	}
	node_to_add->next = curr->next;

	curr->next = node_to_add;

	return (node_to_add);
}

/**
 * add_nodeint - adds a new node at the beginning of a singly-linked list
 * @head: Address of pointer to the first node
 * @n: Value to set member to after declaration
 *
 * Return: Address of the new node, or NULL
 */

istint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
