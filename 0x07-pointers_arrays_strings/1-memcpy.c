#include "main.h"
/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
