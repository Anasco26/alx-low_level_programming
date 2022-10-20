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
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (str == '\0')
	{
		free(new);
		return (NULL);
	}

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	
	*head = new;
	free(new);
	
	return (*head);
}
