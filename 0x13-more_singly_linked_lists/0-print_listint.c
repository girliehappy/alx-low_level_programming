#include "lists.h"

/**
 * print_listint - A function that prints all the elements of a linked list
 * @h: A linked list of type listint_t to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
 size_t p = 0;

 while (h)
 {
 printf("%d\n", h->n);
 p++;
 h = h->next;
 }

 return (p);
}

