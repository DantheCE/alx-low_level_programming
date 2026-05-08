#include "main.h"

/**
 * guess_checker - guess logic for finding square roots
 * @base: number we're trying to find the square root of
 * @n: number we guessed
 *
 * Return: Square root of a number
 */
int guess_checker(int base, int n)
{
	if (n * n == base)
	{
		return (n);
	}
	if (n * n > base)
	{
		return (-1);
	}
	return(guess_checker(base, n + 1));
}
/**
 * _sqrt_recursion - calculate the square root of a number using recursion
 * @n: number we are trying to find the root of
 *
 * Return: Square root of a number
 */
int _sqrt_recursion(int n)
{
	return (guess_checker(n, 1));
}
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
