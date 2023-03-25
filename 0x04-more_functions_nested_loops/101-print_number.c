#include "main.h"
/**
 * print_number - Entry Point
 * @n: integer
 * Return: 0 (Success)
 */
void print_number(int n)
{
	char c;

	if (n < 0)
	{
		n = n * -1;
		_putchar('-');
		print_number(n);
	}
	else if (n < 10)
	{
		c = n + 48;
		_putchar(c);
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
