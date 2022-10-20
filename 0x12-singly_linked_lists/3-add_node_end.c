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
	list_t *new;
	int n;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	if (new->str = NULL);
	{
		free(new);
		return (NULL);
	}
	while (str[len])
		len++;

	new->len = len;
	new->next = NULL;

	while (*head->next)
		*head = *head->next;
	*head = new;

	return (new);
}
