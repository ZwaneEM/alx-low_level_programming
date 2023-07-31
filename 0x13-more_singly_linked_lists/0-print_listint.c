#include "lists.h"

/**
* print_listint - prints all elements of a list
* @h: the start of the list to print
*
* Return: the number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
