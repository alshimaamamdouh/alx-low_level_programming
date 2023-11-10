#include "lists.h"
/**
 * get_dnodeint_at_index - get the nth node of a list.
 * @head: input pointer.
 * @index: input n.
 * Return: the wanted node by index.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
if (!head)
return (NULL);
if (index == 0)
return (head);
while (head)

{
head = head->next;
index--;
if (index == 0)
break;
}
return (head);
}
