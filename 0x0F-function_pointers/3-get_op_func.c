#include "3-calc.h"
#include <string.h>
#include <stddef.h>
/**
 * get_op_func - function pointer used to run functions defined in header file with array mechanism
 *
 * @s: mathematical operator (+, -, *, %, /)
 * Return: function pointer to the operation chosen to run
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = 
	{
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op)
	{
		if(ops[i].op != NULL && (strcmp(ops[i].op, s)) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
