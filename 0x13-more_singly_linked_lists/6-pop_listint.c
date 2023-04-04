#include "lists.h"

/**
* pop_listint- a function that deletes the head node
* @head: a pointe rwhich points to the head node
* Return: the data
*/

int pop_listint(listint_t **head)
{
int data;
listint_t *temp;

if (*head == NULL)
return (0);

temp = *head;
data = temp->n;
*head = (*head)->next;
free(temp);

return (data);
}
