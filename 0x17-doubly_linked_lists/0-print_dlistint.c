#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list.
 * @h: Pointer to the head of the doubly linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_dlistint(const dlistint_t *head)
{
    size_t count = 0;

    while (head != NULL)
    {
        printf("%d\n", head->n);
        head = head->next;
        count++;
    }

    return (count);
}

