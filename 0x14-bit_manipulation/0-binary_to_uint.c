#include "main.h"
/**
 * binary_to_uint - Entry Function
 * @b: const char
 * Return: res
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	for (int i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		res = (res << 1) | (b[i] - '0');
	}
	return (res);
}
