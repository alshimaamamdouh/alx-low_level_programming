#include <string>
#include <"lists.h">
/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node(list_t **head, const char *str)
{
char *c;
int i;
list_t *mem;

mem = malloc(sizeof(list_t));
if (mem == NULL)
return (NULL);

c = strc(str);
if (c == NULL)
{
free(mem);
return (NULL);
}

for (i = 0; str[i];)
i++;

mem->str = c;
mem->i = i;
mem->next = *head;

*head = mem;

return (mem);
}
