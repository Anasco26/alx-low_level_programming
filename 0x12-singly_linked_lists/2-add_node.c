#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - Function to add node to a head
 * @head: node head
 * @str: Pointer to the new node
 * Return: The pointer to modified list
 */

list_t *add_node(list_t **head, const char *str)
{
	int len = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}
