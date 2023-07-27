#include "lists.h"
#include <stdlib.h>

/**
 * list_len - returns the number of elements in a linked
 * @h: pointer tothe list_t
 * Return: number of element
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
