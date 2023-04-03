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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
