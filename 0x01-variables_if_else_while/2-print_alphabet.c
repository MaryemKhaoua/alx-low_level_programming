#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
