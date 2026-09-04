#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates b number of int elements
 * @b: number of elements required to allocate
 *
 * Return: pointer to allocated values.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	if (b == 0)
	{
		return (NULL);
	}

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
