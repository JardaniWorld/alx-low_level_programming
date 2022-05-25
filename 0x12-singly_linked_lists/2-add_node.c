#include "lists.h"

/**
 * add_node - This functiion adds a new node at the beginning
 * of a linked list
 *
 * @head: A pointer to a pointer variable
 * @str: A second variable
 *
 * Return: The address of the new element
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *newElement;
int numchar;

newElement = malloc(sizeof(list_t));

if (newElement == NULL)
{
return (NULL);
}

for (numchar = 0; str[numchar] != '\0'; numchar++)
	;

newElement->str = strdup(str);

if (newElement->str == NULL)
{
free(newElement);
return (NULL);
}

newElement->len = numchar;
newElement->next = *head;
*head = newElement;

return (*head);
}
