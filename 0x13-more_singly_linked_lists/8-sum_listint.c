
#include "lists.h"

/**
 * sum_listint - total all the data in a listint_t list
 * @head: first node should be right in the linked list
 *
 * Return: the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}
