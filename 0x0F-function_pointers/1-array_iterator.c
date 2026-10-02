#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function pointed to by action using array members as arguments
 *
 * @array: an array holding integers in each index
 * @size: size of said array
 * @action: A pointer to the function to be used
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (action == NULL)
		exit(-1);
	if (size == 0)
		exit(-1);
	if (array == NULL)
		exit(-1);
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
