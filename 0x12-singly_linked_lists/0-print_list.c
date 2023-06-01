#include <stdio.h>
#include "lists.h"

/**
 * print_list - A  function that prints all the elements of a list_t list.
 * @h: This is a pointer to the list_t list to print
 * Return:  the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t p = 0;

	while (h)
	{
		if (!h->string)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->length, h->string);
		h = h->next;
		p++;
	}
	return (p);
}
