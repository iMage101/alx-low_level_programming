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
/**
* print_number - prints an integer.
* @n: input integer.
* Return: no return.
*/

void print_number(int n)
{
	unsigned int m, d, count;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}

	d = m;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}
	for (; count >= 1; count /= 10)
	{
		_putchar(((m / count) % 10) + 48);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
