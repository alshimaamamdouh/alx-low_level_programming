#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_l, temp = *head;
new_l = malloc(sizeof(dlistint_t);
if (new_l == NULL)
return (NULL);

new_l->n = n;
new_l->next = NULL;
if (temp)
{
while (temp->next)
{
temp = temp->next;
new_l->prev = temp;
temp->prev = new_l;
}
}
else
{
new_l->prev = NULL;
*head = new_l;
}
}
