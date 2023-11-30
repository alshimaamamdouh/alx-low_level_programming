#include "hash_tables.h"

/**
 * key_index - Returns the index 
 * @key: input key
 * @size: input size
 *
 * Return: Index 
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
    unsigned long int  index;
    index = (hash_djb2(key)) % size;
 
    return (index);
}
