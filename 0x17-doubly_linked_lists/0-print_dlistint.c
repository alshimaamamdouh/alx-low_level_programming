#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list.
 * @h: input pointer.
 * Return: number of nodes.
 **/
size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *temp = h;
int i = 0;
while (temp)
{
printf("%i\n", temp->n);
temp = temp->next;
i++;
}
return (i);
}
