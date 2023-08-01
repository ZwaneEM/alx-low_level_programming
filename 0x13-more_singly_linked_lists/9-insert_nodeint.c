#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: start of the list
 * @idx: index of the list where the new node should be added
 * @n: the value to add to the list
 * Return: Null if failed or the address of the start of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current = NULL;
	listint_t *new, *temp;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);

	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}

	for (i = 0; i <= idx; i++)
	{
		if (current == NULL)
			current = *head;

		if (i == idx - 1)
		{

			new->n = n;
			temp = current->next;
			current->next = new;
			current = new;
			current->next = temp;
			return (*head);
		}
		else
			current = current->next;
	}

	return (NULL);
}
