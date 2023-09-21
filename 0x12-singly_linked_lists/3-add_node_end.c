#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node at the end
 * @head: input head.
 * @str: input string.
 *
 * Return: the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *c;
int i;
list_t *ls, *end;

ls = malloc(sizeof(list_t));
if (ls == NULL)
return (NULL);

c = strdup(str);
if (str == NULL)
{
free(ls);
return (NULL);
}

for (i = 0; str[i];)
i++;
ls->str = c;
ls->len = i;
ls->next = NULL;

if (*head == NULL)
{
*head = ls;
}

else
{
end = *head;
while (end->next != NULL)
{
end = end->next;
}
end->next = ls;
}

return (*head);
}
