#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mym = 1;
	int mol_zraq = 0; /* don't mind this hahaha💙 💙 */

	while ((mym << 1) <= n)
		mym <<= 1;

	while (mym != 0)
	{
		if (n & mym)
			_putchar('1');
		else
			_putchar('0');

		mym >>= 1;
		mol_zraq++;
	}

	if (mol_zraq == 0)
		_putchar('0');
}
