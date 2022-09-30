#include "main.h"

/**
<<<<<<< HEAD
 * more_numbers - Prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
=======
*more_numbers - prints 10 times the numbers,
*from 0 to 14, followed by a new line.
*Return: noting
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
void more_numbers(void)
{
	int i, j;

<<<<<<< HEAD
	for (i = 0; i < 10; i++)
=======
	for (i = 0; i <= 9; i++)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
<<<<<<< HEAD
				_putchar(j / 10 + '0');
=======
				_putchar((j / 10) + '0');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}
