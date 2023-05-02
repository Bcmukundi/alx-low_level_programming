#include "lists.h"
#include <stdio.h>

/**
 * print_list - print list of elements
 *  @h: input
 *
 * Return: Number of Nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
		{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
