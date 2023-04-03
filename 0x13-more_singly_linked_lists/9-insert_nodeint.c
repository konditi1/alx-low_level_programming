#include "lists.h"

/**
* insert_nodeint_at_index -This function inserts a new node
* with the given value at the specified index
* @head: double pointer which point to list head
* @idx: index of the list
* @n:what is stored at the new node
* Return: the address of the new node, or NULL if it failed to add the node
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new_node, *current_node, *prev_node;
unsigned int i;

if (head == NULL)
return (NULL);

new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

if (idx == 0)
{
new_node->next = *head;
*head = new_node;
return (new_node);
}

prev_node = NULL;
current_node = *head;
for (i = 0; i < idx; i++)
{
if (current_node == NULL)
{
free(new_node);
return (NULL);
}

prev_node = current_node;
current_node = current_node->next;
}

new_node->next = current_node;
prev_node->next = new_node;

return (new_node);
}

