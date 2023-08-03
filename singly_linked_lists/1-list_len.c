#include "lists.h"

/**
 * list_len -  function that prints the number of elements
 * @h: list pointer
 * Return: the number of elements
 */

size_t list_len(const list_t *h)
{
	size_t num_node = 0;

	while (h)
	{
		h = h->next;
		num_node++;
	}
	return (num_node);
}
