#include "lists.h"
/**
 * sum_dlistint - show the sum of all the data in a list
 * @head: pointer to de head of the list
 * Return: sum of all data of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int add_data = 0;

	while (head != NULL)
	{
		add_data += head->n;
		head = head->next;
	}
	return (add_data);
}

