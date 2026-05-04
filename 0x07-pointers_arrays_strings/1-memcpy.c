#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: destination memory area
 * @src: source memory area
 * @n: number of bytes to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start;

	if (dest == NULL || n == 0)
	{
		return (NULL);
	}
	start = dest;

	while (n > 0)
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (start);
}
