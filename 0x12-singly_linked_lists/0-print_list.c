#include "lists.h"

/**
 * print_list - prints all elements of h
 * @h: the pointer to print the elements of
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nodes++;
	}

	return (nodes);
}
