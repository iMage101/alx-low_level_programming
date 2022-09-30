#include "variadic_functions.h"
<<<<<<< HEAD

/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: count of extra parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list params;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(params, n);

	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	va_end(params);
=======
#include <stdarg.h>

/**
 * sum_them_all - sum all the variable passed to a function
 * @n: the first integer passed
 * Return: the sum of the variable
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	return (sum);
}
