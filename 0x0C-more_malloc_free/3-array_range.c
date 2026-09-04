#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates memory and fills it up with coutn from min to max
 * @min: lowest value in the progression
 * @max: highest value in the progression
 *
 * Return: pointer to allocated memory with the progression.
 */
int *array_range(int min, int max)
{
	int *ptr, *tmpPtr;
	int numElem = (max - min) + 1, i = 0;

	if (min > max)
	{
		return (NULL);
	}

	ptr = (int *)malloc(sizeof(int) * numElem);
	if (ptr == NULL)
	{
		return (NULL);
	}
	tmpPtr = ptr;

	for (i = 0; i < numElem; i++)
	{
		*tmpPtr = min;
		min++;
		tmpPtr++;
	}

	return (ptr);
}
