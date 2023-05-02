#include "lists.h"

/**
 * print_listint - all the elements of the linked list should be printed
 * @h: print the linked list of type listint_t
 *
 * Return: each nodes number
 */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}
