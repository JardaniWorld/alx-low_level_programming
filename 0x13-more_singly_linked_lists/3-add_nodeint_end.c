#include "lists.h"
listint_t *addNode(const int n);

/**
 * add_nodeint_end - This function adds a new node at the end
 * of a singly linked list
 * @head: A pointer to a pointer which points to a linked list
 * @n: A linked list variable
 *
 * Return: The address of the newly added node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *endNode;
listint_t *temp;

temp = *head;
if (head == NULL)
	return (NULL);

endNode = addNode(n);

if (endNode == NULL)
	return (NULL);

if (*head == NULL)
{
*head = endNode;
return (*head);
}

while (temp->next != NULL)
	temp = temp->next;

temp->next = endNode;

return (*head);
}

/**
 * addNode - This function creates a new node
 * @n: A variable
 *
 * Return: A pointer which points to the beginning of the list
 */

listint_t *addNode(const int n)
{
listint_t *endNode;

endNode = malloc(sizeof(listint_t));

if (endNode == NULL)
	return (NULL);
endNode->n = n;
endNode->next = NULL;

return (endNode);
}
