#include "lists.h"

/**
 * free_listint2 - frees a singly list
 * @head: the start of the list
 * Returns: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;

	if (head == NULL)
	{
		return;
	}

	while (*head)
	{
		temp = (*head)->next;

		free(*head);

		*head = temp;
	}
	head = NULL;
}
