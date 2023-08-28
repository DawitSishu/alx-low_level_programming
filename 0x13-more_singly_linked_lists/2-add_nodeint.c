#include "lists.h"
#include <string.h>
/**
* add_node -  adds a new node at the beginning of a listint_t list.
* @head: actual head address of the list
* @n: the number to be added on the head
*
* Return: head of the node
*/
listint_t *add_nodeint(listint_t **head, const int n);
{
listint_t *tmp = malloc(sizeof(listint_t));
int len = 0;
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
tmp->next = *head;
*head = tmp;
return (*head);
}
