#include "lists.h"

/**
 * pop_listint - This function deletes the head node of
 * a singly linked list and returns the head nodes data
 *
 * @head: A pointer to a pointer variable
 *
 * Return: The head nodes data (n)
 */

int pop_listint(listint_t **head)
{
int n;
listint_t *temp;

if (head == NULL || *head == NULL)
	return (0);

n = (*head)->n;
temp = *head;
*head = (*head)->next;

free(temp);

return (n);
}
