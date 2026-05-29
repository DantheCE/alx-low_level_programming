#include "main.h"
#include <stdio.h>

/**
 * print_number_of_args - prints the number of arguments
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing
 */
void print_number_of_args(int argc, char *argv[])
{
    (void)argv;
    printf("%d\n", argc - 1);
}
