#include "main.h"

/**
<<<<<<< HEAD
 * print_binary - prints an int in binary
 * @n: number to print
=======
 * print_binary - function that prints the binary representation of a number
 * @n: number to be printed in binary
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
<<<<<<< HEAD
	_putchar(n & 1 ? '1' : '0');
=======

	_putchar((n & 1) + '0');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
