#include "3-calc.h"
#include <stddef.h>
#define ARRAY_LENGTH(x) (sizeof(x)/sizeof(x[0]))
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

	while (i < (ARRAY_LENGTH(ops)))
	{
		if(ops[i].op != NULL && (_strcmp(ops[i].op, s)) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
