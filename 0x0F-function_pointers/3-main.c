<<<<<<< HEAD
#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main function
 * @argc: argument count
 * @argv: string of arguments in array
=======
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * if not 4 arguments, return Error & exit 98
 * if op is null, return Error & exit 99
 * if div or mod 0, return Error & exit 100
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 * Return: 0
 */
int main(int argc, char *argv[])
{
<<<<<<< HEAD
	int a, b;
	int (*o)(int, int);
=======
	int one, two, ans;
	int (*res)(int, int);
	char *get_op;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
<<<<<<< HEAD
	if (argv[2][1] != '\0')
=======

	one = atoi(argv[1]);
	two = atoi(argv[3]);
	get_op = argv[2];

	/* added edge case if argv[2] was longer than 1 char*/
	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	{
		printf("Error\n");
		exit(99);
	}

<<<<<<< HEAD
	o = get_op_func(argv[2]);
	if (o == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", o(a, b));

=======
	if ((*get_op == '/' || *get_op == '%') && (*argv[3] == '0'))
	{
		printf("Error\n");
		exit(100);
	}

	res = get_op_func(get_op);
	ans = res(one, two);

	printf("%d\n", ans);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
