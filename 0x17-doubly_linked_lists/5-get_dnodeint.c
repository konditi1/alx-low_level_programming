#include "lists.h"

/**
* get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
* @head: A pointer to the head of the doubly linked list.
* @index: The index of the node, starting from 0.
*
* Return: If the node at the given index exists - the address of the node.
*         If the node at the given index does not exist - NULL.
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i;
dlistint_t *current;

current = head;
for (i = 0; current != NULL && i < index; i++)
current = current->next;

return (current);
}

