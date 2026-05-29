#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * main - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (strcmp("ALX", argv[1]))
	{
		printf("%d\n", argc - 1);
	}
	printf("%d\n", argc);
	return (0);
}
