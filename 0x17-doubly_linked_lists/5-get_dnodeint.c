#include "lists.h"
/**
 * get_dnodeint_at_index - show the nth node of a list
 * @head: pointer to the head of list
 * @index: index of the node returning it value
 * Return: value of the node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current_index;
	unsigned int idx_runner;

	if (head == NULL)
		return (NULL);

	current_index = head;
	head->n = current_index->n;
	idx_runner = 0;

	while (current_index != NULL)
	{
		if (idx_runner == index)
			return (current_index);
		idx_runner++;
		current_index = current_index->next;
	}
	return (NULL);
}
