#include "main.h"
/**
 * _puts_recursion - Entry Function
 * @s: char
 * Return: Always 0 (SUCCESS)
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
