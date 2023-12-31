#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *print_list - print linked list.
 *
 *@h: head of linked list
 *
 *Return:the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t j = 0;
if (!h)
return (0);

while (h)
{
if (h->str == NULL)
{
printf("[0] (nil)\n");
}
else
{
printf("[%d] %s\n", h->len, h->str);
}
h = h->next;
j = j + 1;
}
return (j);
}
