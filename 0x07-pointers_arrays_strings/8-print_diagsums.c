#include "main.h"
#include <stdio.h>
/**
 *  print_diagsums - Entry Function
 *  @a: integer
 *  @size: integer
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, sum1 = 0, sum2 = 0;

	while (i < size)
	{
		sum1 += a[i * size + i];
		i++;
	}
	while (j < size)
	{
		sum2 += a[j * size + (size - j - 1)];
		j++;
	}
	printf("%d %d\n", sum1, sum2);
}
