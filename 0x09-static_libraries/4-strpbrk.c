#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - Entry Function
 * @s: char
 * @accept: char
 * Return: s or Null (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
