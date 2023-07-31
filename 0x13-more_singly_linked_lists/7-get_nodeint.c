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
	listint_t *current = head;
	int node = index;
	int n = 0;

	while (current && n < node)
	{
		current = current->next;
		n++;
	}

	if (current == NULL)
		return (NULL);

	return (current);
}
