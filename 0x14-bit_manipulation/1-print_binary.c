#include "main.h"
/**
 * print_binary - Entry Function
 * @n: unsigned long int
 */
void print_binary(unsigned long int n)
{
	unsigned long int mym = 1;

	if (n == 0)
		_putchar('0');
	while (mym <= n)
		mym <<= 1;
	if (mym > n)
	{
		mym >>= 1;
	}
	while (mym)
	{
		if (n & mym)
			_putchar('1');
		else
			_putchar('0');
		mym >>= 1;
	}
}
