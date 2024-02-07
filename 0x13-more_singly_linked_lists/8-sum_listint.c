#include "lists.h"

/**
 * sum_listint - sums of all the data (n) of a listint_t linked list
 * @head: head node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *val = head;

	while (val)
	{
		sum += val->n;
		val = val->next;
	}

	return (sum);
}
