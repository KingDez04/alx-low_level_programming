#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a new node at the end of a list
 * @head: new node address
 * @str: string to be added
 *
 * Return: pointer to list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *tbr;
	int len = 0;
	list_t *one = *head;

	tbr = malloc(sizeof(list_t));
	if (!tbr)
		return (NULL);
	while (str[len])
		len++;
	tbr->str = strdup(str);
	tbr->len = len;
	tbr->next = NULL;
	if (*head == NULL)
	{
		*head = tbr;
		return (tbr);
	}
	while (one->next)
		one = one->next;
	one->next = tbr;

	return (tbr);
}
