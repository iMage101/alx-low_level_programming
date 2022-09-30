#include "3-calc.h"
#include <stdlib.h>
<<<<<<< HEAD
#include <stdio.h>

/**
 * get_op_func - select the correct operation function asked by user
 * @s: operator argument
 * Return: function pointer corresponding to operator given
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
=======

/**
 * get_op_func - call back, to call function depending on what is passed
 * @s: pointer to arguement passed that determines what function to call
 * Return: result
 */

int (*get_op_func(char *s))(int a, int b)
{
	op_t op_s[] = {
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

<<<<<<< HEAD
	i = 0;
	while (i < 5)
	{
		if (ops[i].op[0] == s[0])
			return (ops[i].f);
=======
	while (op_s[i].op)
	{
		if (*(op_s[i].op) == *s)
			return (op_s[i].f);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		i++;
	}
	return (NULL);
}
