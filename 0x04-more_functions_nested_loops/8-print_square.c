#include "main.h"

/**
<<<<<<< HEAD
 * print_square - Prints a square, followed by a new line
 * @size: The size of a square
 */
=======
*print_square - print a square of input size
*@size: demensions of square
*Return: nothing
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void print_square(int size)
{
	int x, y;

<<<<<<< HEAD
	if (size < 1)
	{
		_putchar('\n');
		return;
	}

	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
			_putchar('#');
		_putchar('\n');
	}
=======
	for (y = 0; y < size; y++)
	{
		for (x = 0; x < size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
