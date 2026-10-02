#include <stdio.h>

/**
 * print_name - prints name using function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *));
{
	if (f == NULL)
		return
	if (name == NULL)
		return
	f(name);
}
