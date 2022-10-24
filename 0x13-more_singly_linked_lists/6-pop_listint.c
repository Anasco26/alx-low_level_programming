#include "lists.h"

/**
 * pop_listint - Deletes the head node of a list and 
 * return it data.
 * @head: A pointer to the address of the list.
 *
 * Return: If the linked list is empty - 0.
 * Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int data;

	if (*head == NULL)
		return (0);

	tmp = *head;
	data = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (data);
}
