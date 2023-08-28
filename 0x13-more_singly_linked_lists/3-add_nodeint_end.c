#include "lists.h"
#include <string.h>
/**
* add_nodeint_end -  adds a new node at the end of a listint_t list.
* @head: actual head address of the list
* @n: the number to be added on the head
*
* Return: head of the node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *tmp = malloc(sizeof(listint_t));
listint_t *ptr = *head;
if (tmp == NULL)
{
return (NULL);
}
tmp->n = n;
tmp->next = NULL;
if (*head == NULL)
{
*head = tmp;
return (*head);
}
while (ptr->next != NULL)
{
ptr = ptr->next;
}
ptr->next = tmp;
return (*head);
}
