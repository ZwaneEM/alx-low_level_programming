#include "lists.h"

/**
* listint_len - return the number of elements in list
* @h: start of the linked list
*
* Return: the number of nodes in a list
*/
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}

	return (nodes);
}
