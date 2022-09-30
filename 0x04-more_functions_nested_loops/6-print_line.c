#include "main.h"

/**
<<<<<<< HEAD
 * print_line - Draws a straight line in the terminal
 * @n: Length of the line
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
		_putchar('_');
=======
*print_line - print a line
*@n: length of line
*Return: nothing
*/

void print_line(int n)
{
	while (n >= 1)
	{
		_putchar('_');
		n--;
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	_putchar('\n');
}
