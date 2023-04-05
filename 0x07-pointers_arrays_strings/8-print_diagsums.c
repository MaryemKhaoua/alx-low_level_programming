#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - Entry Function
 *  @a: integer
 *  @size: integer
 */
void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum1 = 0;
	int sum2 = 0;

	while (i < size)
	{
		sum1 += *(a + i * size + i);
		i++;
	}
	i = size - 1;
	while (i >= 0)
	{
		sum2 += *(a + i * size + size - 1 - i);
		i--;
	}
	printf("%d %d\n", sum1, sum2);
}
