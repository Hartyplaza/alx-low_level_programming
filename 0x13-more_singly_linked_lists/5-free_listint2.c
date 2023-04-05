#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * fre_ listint2 - frees a linklist and set the head to NULL
 *
 * @head: pointer to the listint_t list to be freed
 *
 * Return: nothing
 */

void free_listint2(listint_t **head)
{
	listint_t *prev;
	listint_t *curr;

	if (!head || !(*head))
		return;

	prev = *head;
	curr = *head;

	while (curr)
	{
		curr = curr->next;
		free(prev);
		prev = curr;
	}

	*head = NULL;
}
