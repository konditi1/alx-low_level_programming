#include "lists.h"
/**
 * sum_listint -  function that returns the sum of all the data (n)
 * of a listint_t linked list.
 * @head: pointer to the head of the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
    int sum = 0;
    listint_t *current;

    for (current = head; current != NULL; current = current->next)
    {
        sum += current->n;
    }

    return (sum);
}

