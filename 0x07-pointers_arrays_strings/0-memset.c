#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: the constant byte
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *prev;

	if (s == NULL || n == 0)
		return (NULL);

	prev = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (prev);
}
