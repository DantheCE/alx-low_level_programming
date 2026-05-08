#include "main.h"

/**
 * _pow_recursion - calculates the power of a number using recursion
 * @x: base
 * @y: exponent
 *
 * Return: power of a number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	if (y == 1)
	{
		return (x);
	}
	return (x * _pow_recursion(x, y - 1));
}
