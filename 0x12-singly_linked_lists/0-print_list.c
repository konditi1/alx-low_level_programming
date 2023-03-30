#include "lists.h"
#include <stdio.h>

/**
* print_list - prints all the elements of a list_t list
* @h: pointer to head of list_t linked list
*
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
size_t count = 0;
const list_t *current = h;

while (current != NULL)
{
if (current->str != NULL)
printf("[%u] %s\n", current->len, current->str);
else
printf("[0] (nil)\n");

count++;
current = current->next;
}

return (count);
}

