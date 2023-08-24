#include "lists.h"
/**
* add_node -  adds a new node at the beginning of a list_t list.
* @head: actual head address of the list
* @str: the sring to be added on the head
*
* Return: head of the node
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *tmp = malloc(sizeof(list_t));
int len = 0, i = 0;

if (tmp == NULL)
{
return (NULL);
}
while (str[i] != '\0')
{
tmp->str[i] = str[i];
len++;
i++;
}
tmp->len = len;
tmp->next = *head;
*head = tmp;
return (tmp);
}
