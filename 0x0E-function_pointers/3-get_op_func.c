#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - math operations
 * @s: string pointer
 * Return: result
 */
int (*get_op_func(char *s))(int, int)
{
	int j;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	j = 0;
	while (j < 5)
	{
		if (*ops[j].op == *s)
			return (ops[j].f);
		j++;
	}
	return (NULL);
}
