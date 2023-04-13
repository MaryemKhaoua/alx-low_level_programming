#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry Fucntion
 * @s1: char
 * @s2: char
 * @n: unsigned int
 * Return: res (SUCCESS)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len1, len2;
	char *res;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	if (n >= len2)
		n = len2;
	res = malloc(len1 + n + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		res[i + j] = s2[j];
	res[len1 + n] = '\0';
	return (res);
}
