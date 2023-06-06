#include "lists.h"

/**
 * free_listint - A function that frees a listint_t list
 * @head: The listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}
