#include "main.h"
/**
 * _strstr - Entry Function
 * @haystack: char
 * @needle: char
 * Return: haystack or NULL (SUCCESS)
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j] == haystack[i + j])
		{
			if (needle[j + i] == '\0')
			{
				return (haystack + i);
			}
			j++;
		}
		i++;
	}
	return ('\0');
}
