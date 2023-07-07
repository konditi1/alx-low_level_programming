#include "hash_tables.h"

/**
* hash_table_set - Adds an element to the hash table.
* @ht: The hash table to add/update the key/value pair.
* @key: The key. Cannot be an empty string.
* @value: The value associated with the key. Must be duplicated.
*
* Return: 1 if the addition/updating succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *new_node, *temp;

if (ht == NULL || key == NULL || *key == '\0')
return (0);
index = key_index((const unsigned char *)key, ht->size);
/* Check if key already exists, update its value */
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
free(temp->value);
temp->value = strdup(value);
if (temp->value == NULL)
return (0);
return (1);
}
temp = temp->next;
}
/* Key doesn't exist, create a new node */
new_node = malloc(sizeof(hash_node_t));
if (new_node == NULL)
return (0);
new_node->key = strdup(key);
new_node->value = strdup(value);
if (new_node->key == NULL || new_node->value == NULL)
{
free(new_node->key);
free(new_node->value);
free(new_node);
return (0);
}
/* Add the new node at the beginning of the list */
new_node->next = ht->array[index];
ht->array[index] = new_node;
return (1);
}
