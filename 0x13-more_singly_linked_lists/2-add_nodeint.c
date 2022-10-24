#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning
 * of a list.
 * @head: A pointer to the address of the list.
 * @n: The integer num to be added.
 *
 * Return: If the function fails - NULL.
 * Otherwise - the address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
