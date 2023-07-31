#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: start of the list
 * @index: index of the node to delete
 * Return: 1 if it succeeded . -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = NULL;
	listint_t *temp = *head;
	listint_t *back;

	if (*head == NULL)
		return (-1);

	for (i = 0; i <= index; i++)
	{
		if (current == NULL)
		{
			current = *head;
			back = *head;
		}

		if (i == index && i >= 1)
		{
			if (!temp || !(temp->next))
				return (-1);

			temp = current->next;
			back->next = temp;
			free(current);
			break;
		}

		if (i == index && i == 0)
		{
			*head = current->next;
			free(back);
			break;
		}

		back = current;
		current = current->next;
	}

	return (1);
}
