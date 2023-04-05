#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * free_listint - free linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *curr = head;
	listint_t *prev = head;

	if (!head)
		return;

	while (curr)
	{
		curr = curr->next;

		free(prev);

		prev = curr;
	}
}
