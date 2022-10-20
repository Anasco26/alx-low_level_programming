#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node_end - Add new list to node end
 * @head: Pointer to the node
 * @str: Pointer to the string
 * Return: Ponter to the head list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *last;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;
	
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	/* Traversing through list */
	if (*head == NULL)
		*head = new;
	else 
	{
		last = *head;
		while (last->next)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
