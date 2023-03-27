#include "main.h"
/**
 * puts_half - Entry Function
 * @str: char
 */
void puts_half(char *str)
{
	int index, half;

	half = index / 2;
	while (str[index] != '\0')
		index++;
	if (index % 2 == 1)
		half++;
	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
}
