#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - define
 * @argc: count
 * @argv: vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, j;

	if (argc != 4)
		printf("Error\n"), exit(98);
	i = atoi(argv[1]);
	j = atoi(argv[3]);
	if (get_op_func(argv[2]) == NULL)
		printf("Error\n"), exit(99);
	if (j == 0 && (*argv[2] == '%' || *argv[2] == '/'))
		printf("Error\n"), exit(100);
	printf("%d\n", (get_op_func(argv[2])(i, j)));
	return (0);
}
