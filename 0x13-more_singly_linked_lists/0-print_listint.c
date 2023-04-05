#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * print_listint - prints all the elements of a linked list
 * @h: head of list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *curr = h;
	size_t nodes = 0;

	if (!h)
		return (0);

	while (curr)
	{
		printf("%d\n", curr->n);

		curr = curr->next;
		nodes++;
	}

	return (nodes);
}
