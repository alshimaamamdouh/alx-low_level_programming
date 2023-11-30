#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: input table
 */
void hash_table_print(const hash_table_t *ht)
{
    unsigned long int i;
    hash_node_t *temp;
    int j = 1;

    if (ht == NULL)
        return;

    printf("{");

    for (i = 0; i < ht->size; i++)
    {
        temp = ht->array[i];
        while (temp != NULL)
        {
            if (!j)
                printf(", ");
            printf("'%s': '%s'", temp->key, temp->value);
            j = 0;
            temp = temp->next;
        }
    }

    printf("}\n");
}
