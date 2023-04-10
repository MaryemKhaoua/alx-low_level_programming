#include "main.h"
/**
 * _atoi - Entry Function
 * @str: char
 * Return: the int converted from the string
 */
int _atoi(char *str)
{
	int sign, i;
	unsigned int res;

	res = i = 0;
	sign = 1;
	while (!(str[i] <= '9' && str[i] >= '0') && str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}
