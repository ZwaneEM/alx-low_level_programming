#include "lists.h"

/**
 * sum_listint - sum of all the data in list
 * @head: the start of the list
 * Return: The sum of all data / 0 if list empty
 */
int sum_listint(listint_t *head)
{
	listint_t *current = NULL;
	int sum = 0;

	if (head == NULL)
		return (0);

	if (current == NULL)
		current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
