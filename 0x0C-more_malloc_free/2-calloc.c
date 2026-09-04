#include "main.h"
#include <stdlib.h>

/**
 * _calloc - mimics the calloc function from the standard library
 * @nmemb: number of members expected in the array
 * @size: size (in terms of bytes) of elements in the array
 *
 * Return: pointer to allocated array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr, *tmpPtr;
	int i = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
	{
		return (NULL);
	}
	tmpPtr = ptr;

	for (i = 0; (unsigned int)i < nmemb; i++)
	{
		*tmpPtr = 0;
		tmpPtr++;
	}

	return (ptr);
}
