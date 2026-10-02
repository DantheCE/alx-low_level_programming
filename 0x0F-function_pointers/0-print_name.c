#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name using function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		exit(-1);
	if (name == NULL)
		exit(-1);
	f(name);
}
