#include "main.h"
#include <stdio.h>

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
	if (argv[1] == "ALX")
	{
		printf("%d\n", argc);
	}
	printf("%d\n", argc - 1);
	return (0);
}
