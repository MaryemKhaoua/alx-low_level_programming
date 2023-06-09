#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mym = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (mym <= n)
		mym <<= 1;
	mym >>= 1;
	while (mym)
	{
		if (n & mym)
			_putchar('1');
		else
			_putchar('0');
		mym >>= 1;
	}
}
