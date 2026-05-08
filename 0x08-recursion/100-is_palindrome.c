#include "main.h"

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
	int length = strlen(s);

	if (length == 0 || length == 1)
	{
		return (1);
	}
	return (is_palindrome_check(s, s + length - 1));
}
