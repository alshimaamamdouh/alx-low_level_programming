#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end -  function that adds a new node at the end.
 * @head: pointer to the pointer of head of linked list.
 * @n: data to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t  *node1;

listint_t *node2 = *head;
node1 = malloc(sizeof(listint_t));
if (node1 == NULL)
return (NULL);
node1->n = n;
node1->next = NULL;
if (*head == NULL)
{
*head = node1;
return (node1);
}
while (node2->next)
node2 = node2->next;

node2->next = node1;
return (node1);
}
