#include "lists.h"

/**
* free_list - Frees a list_t list.
* @head: Pointer to the head node of the list.
*
* Return: void.
*/
void free_list(list_t *head)
{
list_t *current, *next;

current = head;
while (current)
{
next = current->next;
free(current->str);
free(current);
current = next;
}
}

