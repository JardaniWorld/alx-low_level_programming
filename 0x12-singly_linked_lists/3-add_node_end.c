#include "lists.h"

/**
 * add_node_end - This function adds a new node at the end of a list
 * @head: A pointer to a pointer variable
 * @str: A variable
 *
 * Return: The address of the new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *newElement, *temp;
int i;
newElement = malloc(sizeof(list_t));
if (newElement == NULL)
{
return (NULL);
}

for (i = 0; str[i] != '\0'; i++)
	;
newElement->str = strdup(str);

if (newElement->str == NULL)
{
free(newElement);
return (NULL);
}
newElement->len = i;
newElement->next = NULL;
if (*head == NULL)
{
*head = newElement;
}
else if ((*head)->next == NULL)
{
(*head)->next = newElement;
}
else
{
temp = *head;
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = newElement;
}
return (newElement);
}
