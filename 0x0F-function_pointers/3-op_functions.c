#include "3-calc.h"

/**
 * op_add - adds two numbers together
 *
 * @a: first argument
 * @b: second argument
 * Return: an int which is the sum of two numbers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds difference between two numbers
 *
 * @a: first argument
 * @b: second argument
 * Return: an int which is the difference of two numbers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - finds product of two numbers
 *
 * @a: first argument
 * @b: second argument
 * Return: product of two numbers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a: first argument
 * @b: second argument
 * Return: result of dividing two numbers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - finds the remainder after dividing two numbers
 *
 * @a: first argument
 * @b: second argument
 * Return: remainder after dividing two numbers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
