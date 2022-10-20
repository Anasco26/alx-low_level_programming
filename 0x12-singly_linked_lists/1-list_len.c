#include "lists.h"
#include <stdlib.h>

/**
 * list_len - Function to get list length
 * @h: Pointer to list head
 *
 * Return: Lenght of node
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
