#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: new node address
 * @str: what is to be added
 *
 * Return: address of new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tbr;
	unsigned int len = 0;

	while (str[len])
		len++;
	tbr = malloc(sizeof(list_t));
	if (!tbr)
		return (NULL);
	tbr->str = strdup(str);
	tbr->len = len;
	tbr->next = (*head);
	(*head) = tbr;

	return (*head);
}
