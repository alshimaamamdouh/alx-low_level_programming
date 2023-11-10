#include "lists.h"
/**
 * free_dlistint - frees list.
 * @head: input pointer.
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		free_dlistint(head->next);
		free(head);
	}
}
