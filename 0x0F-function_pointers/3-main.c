#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * print_name - prints name using function pointer
 *
 * @argc: number of arguments in program
 * @agrv: array of arguments used in program
 * Return: 0 on success, anything else failure
 */
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	char *s;
	int (*fp)(int, int);
	int result = 0;


	if (argc < 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	s = argv[2];
	fp = get_op_func(s);
	result = 0;

	if (fp == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	if ((_strcmp("/", s) == 0 || _strcmp("%", s) == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = fp(num1, num2);
	printf("%d\n", result);
	return (0);
}
