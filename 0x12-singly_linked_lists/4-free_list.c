#include "lists.h"
#include <stdlib.h>
#include <stddef.h>

void free_list(list_t *head)
{
	list_t *free_it;

	while (head != NULL)
	{
		free_it = head;
		head = head->next;
		free(free_it->str);
		free(free_it);
	}
	head = NULL;
}
