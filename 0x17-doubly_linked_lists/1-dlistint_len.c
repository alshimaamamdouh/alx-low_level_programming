#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a list.
 * @h: input pointer.
 * Return: number of nodes.
 **/
size_t dlistint_len(const dlistint_t *h)
{
const dlistint_t temp = h;
int i = 0;
while (temp)
{
temp = temp->next;
i++
}
return (i);
}
