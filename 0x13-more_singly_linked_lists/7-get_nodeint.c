#include "lists.h"

/**
* get_nodeint_at_index- a function that returns the nth node of a
* listint_t linked list.
* @head: pointer to the head node
* @index: node index from 0
* Return: returns a pointer nth node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *current = head;
unsigned int i = 0;

while (current != NULL && i < index)
{
current = current->next;
i++;
}

if (i != index)
return (NULL);

return (current);
}
