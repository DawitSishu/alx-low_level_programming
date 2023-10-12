#include "lists.h"
/**
* add_dnodeint_end - adds a new node at the end of a dlistint_t list.
* @head: header of double linked list
* @n: intiger to set in a new node
* Return: address of a new element
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new_node, *copy_node;
copy_node = *head;
if (head == NULL)
{
return (NULL);
}
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
{
return (NULL);
}
new_node->n = n;
if (*head == NULL)
{
new_node->next = NULL;
new_node->prev = NULL;
*head = new_node;
}
else
{
while (copy_node->next != NULL)
copy_node = copy_node->next;
new_node->next = NULL;
new_node->prev = copy_node;
copy_node->next = new_node;
}
return (new_node);
}
