#include "lists.h"

/**
 * sum_listint -  returns the sum of all the data (n) 
 * of a listint_t linked list.
 * @head: A pointer .
 *
 * Return: If the list is empty - 0.
 */
int sum_listint(listint_t *head)
{
int i = 0;
while (head)
{
i += head->n;
head = head->next;
}
return (i);
}
