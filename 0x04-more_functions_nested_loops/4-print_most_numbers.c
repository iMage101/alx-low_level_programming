#include "main.h"

/**
<<<<<<< HEAD
 * print_most_numbers - Prints the numbers, from 0 to 9 (2,4 exclusive),
 * followed by a new line
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
=======
*print_most_numbers - print 0-9 without 2 and 4
*Return: nothing
*/

void print_most_numbers(void)
{
	char i = '0';

	while (i <= '9')
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar(i);
		}

		i++;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
	_putchar('\n');
}
