#include "lists.h"

/**
 * sum_listint - A function that returns the sum of all the data (n) of a
 * listint_t linked list
 * @head: first node in the linked list
 * Return: 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
