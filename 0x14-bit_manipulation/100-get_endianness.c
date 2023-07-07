#include "main.h"
/**
 * get_endianness - Entry Function
 * Return: Always 0.
 */
int get_endianness(void)
{
	int m = 1;

	if (*(char *)&m)
		return (1);
	return (0);
}
