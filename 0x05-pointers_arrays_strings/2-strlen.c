#include "main.h"
/**
 * _strlen - Entry Function
 * @s : char
 * Return: len (Success)
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
