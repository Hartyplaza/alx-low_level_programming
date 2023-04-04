#include "lists.h"

/**
 * free_listint - free linked list
 *
 * @head: listint_t list to be freed
 *
 * Return: no return
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
	temp = head->next;
	free(temp);
	temp = head;
	}
}

