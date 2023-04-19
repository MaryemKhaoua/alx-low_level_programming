#include "function_pointers.h"
/**
 * array_iterator - Entry Function
 * @array: array
 * @size: size of the array
 * @action: pointer to a function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t m;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (m = 0; m < size; m++)
	{
		action(array[m]);
	}
}
