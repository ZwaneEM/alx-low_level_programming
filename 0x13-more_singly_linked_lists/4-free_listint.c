#include "lists.h"

/**
 * free_listint - frees a list
 * @head: the list to free
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head->next;

	free(head);

	head = temp;
}
