#include "lists.h"

/**
* free_listint2 - frees a listint_t list and sets the head to NULL
* @head: A double pointer which points to the head of a list
*/
void free_listint2(listint_t **head)
{
listint_t *current_node, *next_node;

for (current_node = *head; current_node != NULL; current_node = next_node)
{
next_node = current_node->next;
free(current_node);
}

*head = NULL;
}

