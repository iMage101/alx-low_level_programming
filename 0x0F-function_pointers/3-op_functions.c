<<<<<<< HEAD
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - addition operator
 * @a: first int
 * @b: second int
 * Return: sum of 2 numbers
 */
=======
#include "3-calc.h"

/**
 * op_add - function to add
 * @a: first integer
 * @b: second int
 *
 * Return: sum of a and b
 */

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int op_add(int a, int b)
{
	return (a + b);
}

/**
<<<<<<< HEAD
 * op_sub - subtraction operator
 * @a: first in
 * @b: second int
 * Return: difference of 2 numbers
=======
 * op_sub - function to subtract
 * @a: first integer
 * @b: second integer
 *
 * Return: diffrence between of a and b
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
<<<<<<< HEAD
 * op_mul - product of 2 numbers
 * @a: first int
 * @b: second int
 * Return: product of the numbers
=======
 * op_mul - function to multiply two variables
 * @a: first integer
 * @b: second integer
 *
 * Return: the product of a and b
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
<<<<<<< HEAD
 * op_div - division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: result of the division of the numbers
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
=======
 * op_div - operation to divide two integers
 * @a: first integer
 * @b: second integer
 *
 * Return: return the result of the division of a by b
 */
int op_div(int a, int b)
{
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (a / b);
}

/**
<<<<<<< HEAD
 * op_mod - get remainder of the division of 2 numbers
 * @a: first int
 * @b: second int
 * Return: remainder of division of the numbers
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
=======
 * op_mod - function to get the remainder when 2 integers are divided
 * @a: first integer
 * @b: second integer
 *
 * Return: return the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (a % b);
}
