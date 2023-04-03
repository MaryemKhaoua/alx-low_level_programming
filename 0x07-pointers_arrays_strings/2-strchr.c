#include "main.h"
#include <stddef.h>
/**
 * _strchr - Entry Function
 * @s: char
 * @c: char
 * Return: NULL (SUCCESS)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (NULL);
}
