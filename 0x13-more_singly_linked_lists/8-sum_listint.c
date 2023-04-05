#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */

int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	if (!head)
		return (sum);

	while (curr)
	{
		sum += curr->n;
		curr = curr->next;
	}

	return (sum);
}
