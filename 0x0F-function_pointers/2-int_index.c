#include "function_pointers.h"

/**
 * int_index - performs a search and comparison using function pointer
 *
 * @array: an array holding integers in each index
 * @size: size of said array
 * @cmp: A pointer to the function that performs comparison
 * Return: The index of the matching int, 0 if values aren't the same, -1 on error or no element found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0, result = 0;

	if (cmp == NULL)
		return(-1);
	if (size <= 0)
		return(-1);
	if (array == NULL)
		return(-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
