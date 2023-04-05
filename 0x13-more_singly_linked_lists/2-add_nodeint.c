#include "lists.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

/**
 * add_nodeint - add a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the  new node
 *
 * Return: the address of the new element, or NULL if it failed
 *
 */
listint_t *add_nodeint(listint_t **head, const int n)

{
	listint_t *node = malloc(sizeof(listint_t));

	if (!node)
		return (NULL);

	node->n = n;
	node->next = *head;

	*head = node;

	return (node);
}
