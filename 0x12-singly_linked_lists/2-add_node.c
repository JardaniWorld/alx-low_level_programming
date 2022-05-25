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
size_t numchar;

newElement = malloc(sizeof(list_t));

if (newElement == NULL)
{
return (NULL);
}

newElement->str = strdup(str);

for (numchar = 0; str[numchar]; numchar++)
    ;

newElement->len = numchar;
newElement->head = *head;
*head = newElement;

return (*head);
}
