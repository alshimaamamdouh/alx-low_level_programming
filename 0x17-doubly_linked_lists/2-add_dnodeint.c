#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of alist.
 * @head: input pointer.
 * @n: int to set in the new node.
 * Return: pointer or NULL
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new_list;
new_list = malloc(sizeof(dlistint_t));
if (new_list == NULL)
return (NULL);

new_list->n = n;
new_list->prev = NULL;
new_list->next = *head;
if(*head)
(*head)->prev = new_list;

*head = new_list;
return (new_list);
}
