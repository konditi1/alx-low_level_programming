#include "lists.h"

/**
* listint_len- function that returns a pointer to a linked list
* @h: points to the head of a list
* Return: Count
* Description: This function traverses a linked list and count
* the number of nodes in it
*/

size_t listint_len(const listint_t *h)
{
if (h == NULL)
return (0);
else
return (1 + listint_len(h->next));
}
