#include <stdlib.h>
#include "lists.h"

/**
 * free_list - A function that frees a list_t list.
 * @head: The list that needs to be freed (list_t)
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *t;

	while (head)
	{
		t = head->next;
		free(head->str);
		free(head);
		head = t;
	}
}
