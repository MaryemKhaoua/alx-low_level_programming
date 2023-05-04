#include "main.h"
/**
 * binary_to_uint - function that converts a binary number to an unsigned int
 * @b: const char
 *
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int res =  0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = res * 2 + (b[i] - '0');
	}
	return (res);
}
