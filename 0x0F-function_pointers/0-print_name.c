#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - prints name using function pointer
 *
 * @name: name we need to print
 * @f: A pointer to the function used to format or print the name
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
