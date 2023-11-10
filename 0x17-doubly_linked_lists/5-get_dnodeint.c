#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a list.
 * @head: input pointer.
 * @index: input n.
 * Return: the wanted node by index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
int i;
for (i = 0; index != 0; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
		index = index - i;
	}

	return (head);
}
