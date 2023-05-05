#include "main.h"
/**
 * print_binary - Prints the binary representation of a number
 * @n: The number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	unsigned long int mym = 1UL << ((sizeof(unsigned long int) * 8) - 1);
	int mol_zraq = 0; /* don't mind this hahaha💙 💙 */

	if (n == 0)
		_putchar('0');

	while (mym > 0)
	{
		if ((n & mym) == mym)
		{
			_putchar('1');
			mol_zraq = 1;
		}
		else if (mol_zraq)
			_putchar('0');

		mym = mym >> 1;
	}

}
