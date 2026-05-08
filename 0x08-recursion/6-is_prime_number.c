#include "main.h"
#include <math.h>

/**
 * prime_checker - holds logic for prime number checks
 * @n: number we're checking
 * @d: divisor, number moves from 2 up to square root of n
 *
 * Return: 1 if number is prime, 0 if not
 */
int prime_checker(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (prime_checker(n, d + 1));
}
/**
 * is_prime_number - check if a number is a prime number
 * @n: number we're checking
 *
 * Return: 1 if number is prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	return (prime_checker(n, 2));
}
