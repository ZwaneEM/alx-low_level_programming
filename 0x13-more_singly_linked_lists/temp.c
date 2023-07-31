#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of list
 * @head: the list to add
 * @n: value to add to list
 *
 * Return: Address of the new element/ NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
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
