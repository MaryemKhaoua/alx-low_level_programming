#include <stdio.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr < 10; nbr++)
	{
		putchar(nbr + '0');
	}
	putchar('\n');
	return (0);
}
