#include "lists.h"

/**
 * get_nodeint_at_index - This function returns the nth node
 * of a singly linked list
 *
 * @head: A pointer variable to a linked list
 * @index: node index starting at 0.
 *
 * Return: The nth node of a linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int count;

for (count = 0; count < index; count++)
{
if (head == NULL)
	return (NULL);

head = head->next;
}

return (head);
}
