#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at a given index in a dlistint_t linked list.
* @head: A pointer to the address of the head of the doubly linked list.
* @index: The index of the node to be deleted.
*
* Return: 1 if the deletion succeeded, or -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current, *temp;
unsigned int i;

if (head == NULL || *head == NULL)
return (-1);

current = *head;

if (index == 0)
{
*head = current->next;
if (*head != NULL)
(*head)->prev = NULL;
free(current);
return (1);
}

for (i = 0; i < index; i++)
{
if (current->next == NULL)
return (-1);
current = current->next;
}

temp = current->prev;
temp->next = current->next;

if (current->next != NULL)
current->next->prev = temp;

free(current);

return (1);
}

