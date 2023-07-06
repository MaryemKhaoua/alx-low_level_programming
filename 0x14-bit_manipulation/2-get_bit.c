#include "main.h"
/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int get;

	if (index > 64)
		return (-1);
	get = n >> index;
	return (get & 1);
}
