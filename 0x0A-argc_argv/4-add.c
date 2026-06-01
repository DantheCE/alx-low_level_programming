#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int argc, char *argv[])
{
	int result = 0, i = 0, j = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (1);
	}
	argv++;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; **argv; j++)
		{
			if (atoi(*argv) || **argv == '0')
			{
				result += atoi(*argv);
				(*argv)++;
				continue;
			}
			printf("Error\n");
			return (1);
		}
		argv++;
	}
	printf("%d\n", result);
	return (0);
}
