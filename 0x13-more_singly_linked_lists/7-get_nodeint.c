#include "lists.h"

/**
 * get_nodeint_at_index -  returns the nth node of a listint_t linked list.
 * @head: A pointer.
 * @index: The index .
 *
 * Return: linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i;
for (i = 0; i < index; i++)
{
if (head == NULL)
return (NULL);

head = head->next;
}
return (head);
}
