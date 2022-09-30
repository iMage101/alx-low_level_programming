#include "main.h"

/**
<<<<<<< HEAD
 * print_numbers - Prints the numbers, from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
		_putchar(c);
=======
*print_numbers - print 0-9
*Return: nothing
*/

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
		_putchar(i);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	_putchar('\n');
}
