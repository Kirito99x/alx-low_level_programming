#include "lists.h"
#include <stdio.h>

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: listint_t list
 *
 * Return: number of elements in h
*/

size_t listint_len(const listint_t *h)
{
	size_t num_elmnt = 0;

	while (h)
	{
		num_elmnt++;
		h = h->next;
	}

	return (num_elmnt);
}
