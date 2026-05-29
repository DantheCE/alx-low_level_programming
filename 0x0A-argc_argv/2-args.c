#include "main.h"
#include <stdio.h>

/**
 * main - prints all arguments received
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i = 0;
    (void)argc;
    for (i = 0; i < argc - 1; i++)
    {
	    printf("%s\n", *argv++);
    }
    return (0);
}
