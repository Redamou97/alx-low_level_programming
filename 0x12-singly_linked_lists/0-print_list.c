#include "lists.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: integer length of string
 */
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
 * print_list - prints all the elements of a list
 * @h: pointer to the list_t
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		s++;
	}

	return (s);
}
