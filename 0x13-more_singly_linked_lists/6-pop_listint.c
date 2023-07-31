#include "lists.h"

/**
 * pop_listint - deletes the head node of the list
 * @head: start of the list
 * Return: the head node's data / 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
		return (0);

	temp = (*head)->next;
	data = (*head)->n;

	free(*head);

	*head = temp;

	return (data);
}
