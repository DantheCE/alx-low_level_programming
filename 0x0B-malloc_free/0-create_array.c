#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates a char array of size, and initiaizes it with
 * a given char
 * @size: size of memory to allocate
 * @c: data type we're looking to allocate
 *
 * Return: NULL on failure, pointer to an array of chars on success
 */
char *create_array(unsigned int size, char c)
{
	char *ptrReturn, *temp;
	int i = 0;

	ptrReturn = (char *)malloc(sizeof(c) * size);
	temp = ptrReturn;
	if (temp == NULL || size == 0)
		return (NULL);
	while (i < size)
	{
		*temp = c;
		temp++;
		i++;
	}
	return (ptrReturn);
}
