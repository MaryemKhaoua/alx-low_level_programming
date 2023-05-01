#include "lists.h"
/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 *
 * Return: nbr
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
