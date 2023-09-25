#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  function that adds a new node at the beginning.
 * @head: pointer to the pointer of head of linked list.
 * @n: data to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *lss;
lss = malloc(sizeof(listint_t));
if (lss == NULL)
return (NULL);
lss->n = n;
lss->next = *head;
*head = lss;
return (lss);
}
