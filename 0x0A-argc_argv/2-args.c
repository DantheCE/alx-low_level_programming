#include "main.h"
#include <stdio.h>

/**
 * print_all_args - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing
 */
void print_all_args(int argc, char *argv[])
{
    int i = 0;
    (void)argc;
    for (i = 0; i < argc - 1; i++)
    {
	    printf("%s\n", *argv++);
    }
}
