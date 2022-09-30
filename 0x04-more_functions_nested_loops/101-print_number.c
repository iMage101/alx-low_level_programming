#include "main.h"
<<<<<<< HEAD

void print_uint(unsigned int n);

/**
 * print_number - Prints an integer
 * @n: The integer to print
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_uint((unsigned int) n);
}

/**
 * print_uint - Prints an unsigned integer
 * @n: The unsigned int to print
 */
void print_uint(unsigned int n)
{
	if (n / 10 != 0)
		print_uint(n / 10);
	_putchar(n % 10 + '0');
=======
#include <stdio.h>
#include <stdlib.h>

/**
*print_number - prints numbers
*@n: number to be printed
*Return: void
*/

void print_number(int n)
{
	unsigned int n1 = 0;

	if (n < 0)
	{
		n1 = -n;
		_putchar('-');
	}
	else
	{
		n1 = n;
	}
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar((n1 % 10) + '0');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
