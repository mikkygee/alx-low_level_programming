#include "lists.h"

/**
 * * listint_len - returns the number of elements in a linked listint_t list
 * * @h: singly linked list
 * * Return: number of nodes
 * */

size_t listint_len(const listint_t *h)
{
	const listint_t *current = h;

	register size_t ncount = 0;

	while (current)
	{
		ncount++;
		current = current->next;
	}

	return (ncount);
}
