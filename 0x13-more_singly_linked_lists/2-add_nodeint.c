#include "lists.h"

/**
 * add_nodeint - A pointer to a list function
 * @head: A pointer to a pointer variable
 * @n: A variable
 *
 * Return: The address of the new created node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newNode;

if (head == NULL)
	return (NULL);

if (*head == NULL)
	newNode->next = NULL;

else
	newNode->next = *head;
newNode->n = n;
*head = newNode;

return (*head);
}
