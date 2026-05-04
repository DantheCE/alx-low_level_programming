#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix
 * @a: pointer to the matrix
 * @size: size of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i = 0, running_sum_first = 0, running_sum_second = 0;

	for (i = 0; i < size; i++)
	{
		running_sum_first += *(a + ((i * size) + i));
		running_sum_second += *(a + ((i * size) + (size - 1 - i)));
	}
	printf("%d, %d\n", running_sum_first, running_sum_second);
}
