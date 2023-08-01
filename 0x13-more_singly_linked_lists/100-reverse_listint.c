#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * @head: The list to reverse
 *
 * Return: The new address of the linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = NULL;
	listint_t *previous = NULL;

	while (*head != NULL)
	{
		current = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = current;
	}
	*head = previous;

	return (*head);
}
