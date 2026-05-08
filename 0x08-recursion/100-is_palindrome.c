#include "main.h"

/**
 * _strlen - string length helper function
 * @s: pointer to the first char of string
 * @l: variable to track string length
 *
 * Return: length of string
 */
int _strlen(char *s, int l)
{
	if (*s == '\0')
	{
		return (l);
	}
	return (_strlen(s + 1, l + 1));
}
/**
 * is_palindrome_check - logic engine for palindrome checker
 * @first: pointer to the first char of string
 * @last: pointer to the last char of string
 *
 * Return: 1 if word is palindrome, 0 if not
 */
int is_palindrome_check(char *first, char *last)
{
	if (first >= last)
	{
		return (1);
	}
	if (*first != *last)
	{
		return (0);
	}
	return (is_palindrome_check(first + 1, last - 1));
}
/**
 * is_palindrome - checks if a word is a palindrome
 * @s: pointer to the first char of string
 *
 * Return: 1 if word is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int length = _strlen(s, 0);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (is_palindrome_check(s, s + length - 1));
}
