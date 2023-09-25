#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - function that frees a singly linked list.
 * @head: pointer to pointer to the head of linked list.
 *
 */

void free_listint2(listint_t **head)
{
listint_t *node;

if (head == NULL)
return;

while (*head != NULL)
{
node =  *head;
*head = (*head)->next;
free(node);
}
}
