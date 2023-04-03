#include "lists.h"

/**
* free_listint - Afunction that frees up a listint_t list
* @head: points to the head of the list
*/
void free_listint(listint_t *head)
{
listint_t *current_node;

for (current_node = head; current_node != NULL; current_node = head)
{
head = head->next;
free(current_node);
}
}

