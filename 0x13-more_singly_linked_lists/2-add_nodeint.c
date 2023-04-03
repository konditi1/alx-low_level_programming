#include "lists.h"

/**
 * add_nodeint -function that adds a new node at the end of a listint_t list.
 *
 * @head: this is a pointer to a pointer of thr head.
 * @n: the intiger to be stored i a new node
 *
 * Return: The address to new element, and if failed null.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	if (head == NULL)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

