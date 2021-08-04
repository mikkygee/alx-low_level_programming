#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index 
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointr to head of list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head, *tmp;
	unsigned int i;

	if (!head || !(*head))
		return (-1);


	if (!index)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!current)
			return (-1);

		current = current->next;
	}

	tmp = current->next->next;
	free(current->next);
	current->next = tmp;

	return (1);
}
