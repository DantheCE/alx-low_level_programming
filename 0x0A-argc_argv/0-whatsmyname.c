#include "main.h"
#include <stdio.h>

/**
 * print_program_name - prints the name of the program
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Nothing
 */
void print_program_name(int argc, char *argv[])
{
    (void)argc;
    printf("%s\n", *argv);
}