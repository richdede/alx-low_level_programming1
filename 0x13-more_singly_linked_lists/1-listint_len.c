#include "lists.h"

/**
 * returns the number of elements in a linked lists
 *  linked list of type listint_t to traverse
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}
