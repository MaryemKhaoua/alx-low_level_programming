#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	char alpHA;

	for (alpHA = 'a'; alpHA <= 'z'; alpHA++)
		putchar(alpHA);
	for (alpHA = 'A'; alpHA <= 'Z'; alpHA++)
		putchar(alpHA);
	putchar('\n');
	return (0);
}
