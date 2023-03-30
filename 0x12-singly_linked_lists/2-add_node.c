#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
* add_node - adds a new node at the beginning of a list_t list.
* @head: pointer to pointer to the head of the list.
* @str: string to be duplicated and added as a new node.
*
* Return: the address of the new element, or NULL if it failed.
*/
list_t *add_node(list_t **head, const char *str)
{
if (str == NULL)
{
return (NULL); /* invalid input */
}

list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
return (NULL); /* failed to allocate memory */
}

char *str_copy = strdup(str);
if (str_copy == NULL)
{
free(new_node); /* clean up memory allocated so far */
return (NULL); /* failed to duplicate string */
}

new_node->str = str_copy;
new_node->next = *head;
*head = new_node;

return (new_node);
}

