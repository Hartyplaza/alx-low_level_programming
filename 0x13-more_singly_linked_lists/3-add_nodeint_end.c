#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * add_nodeint_end - add a new  node at the end of a linked list
 *
 * @head: pointer to the first element in the list
 *
 * @n: data to insert in the new element
 *
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *curr = *head;
	listint_t *node;

	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	node->n = n;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (curr->next)
		curr = curr->next;
	curr->next = node;

	return (node);
}
