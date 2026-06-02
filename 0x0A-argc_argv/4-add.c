#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * validateNumber - checks if a string contains only digits
 * @chNum: string to validate
 * @length: length of the string
 *
 * Return: 0 on success, 1 on error
 */
int validateNumber(char *chNum, int length)
{
	int i = 0;

	for (i = 0; i < length; i++)
	{
		if (isdigit(chNum[i]))
		{
			continue;
		}
		return (1);
	}
	return (0);
}

/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0 on success, or 1 on error
 */
int main(int argc, char *argv[])
{
	int result = 0, i = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}
	argv++;
	for (i = 1; i < argc; i++)
	{
		if (validateNumber(*argv, strlen(*argv)))
		{
		printf("Error\n");
		return (1);
		}
		result += atoi(*argv);
		argv++;
	}
	printf("%d\n", result);
	return (0);
}
