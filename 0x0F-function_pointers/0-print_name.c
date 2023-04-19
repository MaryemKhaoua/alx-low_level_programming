#include "function_pointers.h"
/**
 * print_name - Entry Function
 * @name: name of the person
 * @f: pointer to function
 * Retunr: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
