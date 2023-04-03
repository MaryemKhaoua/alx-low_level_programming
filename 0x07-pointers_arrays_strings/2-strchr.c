#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: pointer where we search for charachter
 * @c: character we search for
 * Return: NULL if character is not found, return s
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
