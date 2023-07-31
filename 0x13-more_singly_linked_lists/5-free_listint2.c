#include "lists.h"

/**
 * free_listint2 - frees a singly list
 * @head: the start of the list
 * Returns: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head)
	{
		temp = (*head)->next;

		free(*head);

		*head = temp;
	}
	head = NULL;
}
