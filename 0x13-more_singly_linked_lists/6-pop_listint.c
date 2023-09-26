#include "lists.h"
#include <stdlib.h>

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *
 *Return: the deleted node data
 */

int pop_listint(listint_t **head)
{
listint_t *ls;
size_t i;
if (*head == NULL)
return (0);

ls = *head;
i = ls->n;
*head = (*head)->next;
free(ls);
return (i);
}
