#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of multiplication, or 1 on error
 */
int main(int argc, char *argv[])
{
	int result = 1;
	int neg = 0;
	int i = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	while (i < argc)
	{
		if (*argv[i] == '-')
		{
			neg++;
			result *= strtol(argv[i] + 1, argv, 10);
			i++;
			continue;
		}
		result *= strtol(argv[i], argv, 10);
		i++;
	}
	if (neg % 2)
	{
		printf("%c%d\n", '-', result);
		return (result);
	}
	printf("%d\n", result);
	return (result);
}
