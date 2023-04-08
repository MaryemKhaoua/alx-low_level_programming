#include "main.h"
#include <stdio.h>
#define __unused __attribute__((unused))
/**
 * main - prints the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, __unused char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
