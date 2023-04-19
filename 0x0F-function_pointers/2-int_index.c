#include "function_pointers.h"
/**
 * int_index - Entry Function
 * @array: array
 * @size: size of array
 * @cmp: pointer to the function to be used to compare values
 * Return: i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
