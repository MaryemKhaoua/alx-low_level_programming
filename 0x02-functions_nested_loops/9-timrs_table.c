#include "main.h"
/**
 * times_table - Entry point
 */
void times_table(void)
{
	int i, j, p;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			p = i * j;
			if (p > 9)
			{
				_putchar(p / 10 + '0');
				_putchar(p % 10 + '0');
			}
			else
			{
				_putchar(p + '0');
			}
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
