#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		printf("%d", nbr);
	}
	putchar('\n');
	return (0);

}
