#include "main.h"
/**
 * _sqrt_recursion - Entry Function
 * @n: integer
 * Return: the square root
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 * sqrt - Entry Function
 * @n: integer
 * @i: integer
 * Return: the square root
 */
int _sqrt(int n, int i)
{
	if (i * i == n)
		return (i);
	else if (i * i < n)
		return (_sqrt(n, i + 1));
	else
		return (-1);
}
