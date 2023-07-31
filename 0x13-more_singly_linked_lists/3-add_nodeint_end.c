#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of list
 * @head: the start of the list
 * @n: value to add
 *
 * Return: address of the new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		current = new;
	}

	new->n = n;
	new->next = NULL;

	current->next = new;
	current = new;

	return (*head);

}
