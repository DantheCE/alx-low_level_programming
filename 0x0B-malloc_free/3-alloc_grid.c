#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2d array using dynamic memory allocation
 * @width: number of columns for the 2d array
 * @height: number of rows for the 2d array
 *
 * Return: Failure - NULL; Success - pointer to 2-dimensional array
 */
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **ptrReturn, **temp;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptrReturn = (int **)malloc(sizeof(int *) * height);
	if (ptrReturn == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptrReturn[i] = (int *)malloc(sizeof(int) * width);
		if (ptrReturn[i] == NULL)
			break;
	}
	i--;
	if (ptrReturn[i] == NULL)
	{
		for (j = i; j >= 0; j--)
			free(ptrReturn[j]);
		free(ptrReturn);
		return (NULL);
	}
	temp = ptrReturn;
	i = 0;
	j = 0;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			*(*(temp + i) + j) = 0;
	}
	return (ptrReturn);
}
