#include "3-calc.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry Function
 * @argc: int
 * @argv: char
 * Return: returns the result of the operation
 */

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
