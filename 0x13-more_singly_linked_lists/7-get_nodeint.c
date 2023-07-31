#include "lists.h"

/**
 * get_nodeint_at_index - return nth node of the list
 * @head: singly linked list
 * @index: is the index of the node
 *
 * Return: return NULL if node does not exists / the index of node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = NULL;
	int node = index + 1;
	int n;

	if (head == NULL)
		return (NULL);

	for (n = 0; n <= node; n++)
	{
		if (current == NULL)
			current = head;

		if (n == node - 1)
		{
			if (current == NULL)
				current = NULL;
			break;
		}
		current = current->next;
	}

	return (current);
}
