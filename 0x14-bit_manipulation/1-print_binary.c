#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mym = 1;
	int mol_zraq = 1; /* don't mind this hahaha💙💙*/

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mym <= n)
	{
		mym = mym << 1;
	}
	mym = mym >> 1;

	while (mym)
	{
		if (n & mym)
		{
			_putchar('1');
			mol_zraq = 0;
		}
		else
		{
			if (!mol_zraq)
			{
				_putchar('0');
			}
		}
		mym = mym >> 1;
	}

	if (mol_zraq)
	{
		_putchar('0');
	}
}
