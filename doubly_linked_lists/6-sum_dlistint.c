#include "lists.h"

/**
  * sum_dlistint - returns the sum of all the data (n) of a linked lis
  * @head: pointer
  * Return: if the list is empty, return 0 else sum of all the data(n)
  */
int sum_dlistint(dlistint_t *head)
{
	unsigned int sum = 0;
	
	if (head == NULL)
		return (0);
	
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
