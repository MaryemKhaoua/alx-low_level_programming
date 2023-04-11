#include "main.h"
#include <stdlib.h>
/**
 * str_concat - Entry Function
 * @s1: char
 * @s2: char
 * Return: res (SUCCESS)
 */
char *str_concat(char *s1, char *s2)
{
	int len, len1, len2, i, j;
	char *res;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	len1 = len2 = 0;
	while (s1[len1] != '\0')
		len1++;
	while (s2[len2] != '\0')
		len2++;
	len = len1 + len2;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		res[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		res[i + j] = s2[j];
	res[len] = '\0';
	return (res);
}
