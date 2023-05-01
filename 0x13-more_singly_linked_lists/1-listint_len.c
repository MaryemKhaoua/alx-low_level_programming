#include "lists.h"
/**
 * listint_len - Entry Fucntion
 * @h: pointer
 *
 * Return: returns the number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t nbr = 0;

	while (h != NULL)
	{
		nbr++;
		h = h->next;
	}
	return (nbr);
}
