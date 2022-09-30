#include "main.h"
<<<<<<< HEAD

/**
 * print_last_digit - Prints the last digit of a number
 * @n: The number to check
 *
 * Return: The last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit;

	if (n < 0)
	{
		lastDigit = -1 * (n % 10);
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
	else
	{
		lastDigit = n % 10;
		_putchar(lastDigit + '0');
		return (lastDigit);
	}
=======
/**
*print_last_digit - prints last digit
*@n: number to compute last digit for
*Return: last digit
*/
int print_last_digit(int n)
{
	n = (n % 10);
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
