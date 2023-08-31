#include "lists.h"


/** 
* check_node - checks if the list is a looped list 
* @head: The start of the list 
* Return: 1 if is loop/ -1 if not loop 
*/ 
size_t check_node(const listint_t *head) 
{ 
	const listint_t *current, *previous; 

	current = head;

	while (head) 
 	{
	 	if (current->next == head || head->next == current)
 		{ 
 			return (1); 
 		} 

 		if (current->next == NULL) 
 			break; 

 		current = current->next; 
 	} 

 	return (2); 
 }



/**
 * print_listint_safe - prints a linked list 
 * @head: The start of the linked list
 * Return: The number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t loop;
	size_t nodes = 0;
	const listint_t *current = NULL;

	if (!head)
		exit (98);

	loop = check_node(head);

	current = head;

	if (loop == 1)
	{
		while (head)
		{
			nodes += 1;
			if (current->next == head)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				break;
			}

			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
	}

	if (loop == 2)
	{
		while (head)
		{
			nodes += 1;
			if (current->next == NULL)
			{
				printf("[%p] %d\n", (void *)current, current->n);
				break;
			}

			printf("[%p] %d\n", (void *)current, current->n);
			current = current->next;
		}
	}

	return (nodes);
}
