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

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	res = malloc(len1 + n + 1);
	if (res == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		res[i] = s2[j];
		i++;
	}
	res[i] = '\0';
	return (res);
}
