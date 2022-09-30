#include "main.h"
<<<<<<< HEAD

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n is greater than zero,
 * 0 if n is zero, -1 if n is less than zero
 */
int print_sign(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else if (n > 0)
=======
/**
*print_sign - determin sign of int
*@n: number to check for sign
*Return: 1 if positive, 0 if 0, and -1 if negative
*/
int print_sign(int n)
{
	if (n > 0)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	{
		_putchar('+');
		return (1);
	}
<<<<<<< HEAD
=======
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	else
	{
		_putchar('-');
		return (-1);
	}
}
