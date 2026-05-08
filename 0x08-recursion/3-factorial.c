#include "main.h"

/**
 * factorial - function to calculate factorial recursively
 * @n: number to calculate factorial for
 *
 * Return: factorial of a number
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
