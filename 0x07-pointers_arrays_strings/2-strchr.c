#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (1)
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			break;
		}
		s++;
	}
	return (NULL);
}
