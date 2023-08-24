#include "lists.h"
#include <string.h>
/**
* add_node_end -  adds a new node at the end of a list_t list.
* @head: actual head address of the list
* @str: the sring to be added on the head
*
* Return: head of the node
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *tmp = malloc(sizeof(list_t));
list_t *ptr = *head;
int len = 0;
char *str2;
if (tmp == NULL)
{
return (NULL);
}
str2 = strdup(str);
while (str[len] != '\0')
{
len++;
}
tmp->str = str2;
tmp->len = len;
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
