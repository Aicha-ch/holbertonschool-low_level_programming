#include "lists.h"

/**
 * dlistint_len - is a function that returns the number of elements of a list
 * @h: pointer to the list
 * Return: number of elements in a linked dlistint_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	
	while (h)
	{
		len++;
		h = h->next;
	}
	return (len);
}
