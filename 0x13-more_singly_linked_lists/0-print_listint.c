#include "lists.h"
/**
 * print_listint - Entry Function
 * @h: pointer
 * Retunr: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nbr = 0; /* number of nodes*/

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nbr++;
	}
	return (nbr);
}
