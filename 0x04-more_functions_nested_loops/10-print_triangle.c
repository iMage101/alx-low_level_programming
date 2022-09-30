#include "main.h"

/**
<<<<<<< HEAD
 * print_triangle - Prints a triangle, followed by a new line
 * @size: The size of the triangle
 */
void print_triangle(int size)
{
	int c, i, j;

	c = 0;
	i = size - 1;
	while (c < size)
	{
		i = size - 1 - c;
		j = c + 1;
		while (i > 0)
		{
			_putchar(' ');
			i--;
		}
		while (j > 0)
		{
			_putchar('#');
			j--;
		}
		_putchar('\n');
		c++;
	}

	if (size <= 0)
=======
*print_triangle - print a triangle
*@size: demensions of triangle
*Return: nothing
*/

void print_triangle(int size)
{
	int i, j;

	for (i = 1; i <= size; i++)
	{
		for (j = size - i; j > 0; j--)
			_putchar(' ');
		for (j = i; j > 0; j--)
			_putchar('#');
		_putchar('\n');
	}
	if (size < 1)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		_putchar('\n');
}
