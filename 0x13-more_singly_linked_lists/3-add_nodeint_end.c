#include "lists.h"
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

	/* Allocate space for the new node */
	node = malloc(sizeof(listint_t));
	if (!node)
		return (NULL);

	/* Assign values to members of the struct */
	node->n = n;
	node->next = NULL;

	/* If the head points to null, add the new node as the first element */
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}

	/* Find the last element, then let it point to the new node */
	while (curr->next)
		curr = curr->next;
	curr->next = node;

	return (node);
}
