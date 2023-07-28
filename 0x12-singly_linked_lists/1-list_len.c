#include <stdlib.h>
#include "lists.h"

/**
 * list_len - A function that returns the number of elements
 * in a linked list_t list
 * @h: A pointer to the list_t list
 * Return: The number of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t f = 0;

	while (h)
	{
		f++;
		h = h->next;
	}
	return (f);
}
