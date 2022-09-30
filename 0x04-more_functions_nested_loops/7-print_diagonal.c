#include "main.h"

/**
<<<<<<< HEAD
 * print_diagonal - Draws a diagonal line in the terminal
 * @n: Length of the line
 */
void print_diagonal(int n)
{
	int i, c;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	c = 0;
	while (n > 0)
	{
		i = c;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		_putchar('\\');
		_putchar('\n');
		c++;
		n--;
	}

	if (c < 1)
=======
*print_diagonal - prints diagonal line
*@n: length of line
*Return: nothing
*/

void print_diagonal(int n)
{
	int x, y;

	for (y = 1; y <= n; y++)
	{
		for (x = 1; x < y; x++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
	}
	if (n < 1)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		_putchar('\n');
}
