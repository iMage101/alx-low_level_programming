#include "main.h"
<<<<<<< HEAD

/**
 * times_table - Prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n = i * j;

			if (n > 9)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			else if (j != 0)
			{
				_putchar(' ');
				_putchar(n + '0');
			}
			else
			{
				_putchar(n + '0');
			}

			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
=======
/**
*times_table - prints times table up to 9
*Return: void
*/
void times_table(void)
{
	int a, b, product;

	product = 0;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			product = a * b;
			if (b != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}
			else if ((product < 10) && (b != 0))
			{
				_putchar(' ');
				_putchar((product % 10) + '0');
			}
			else
			{
				_putchar((product % 10) + '0');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
			}
		}
		_putchar('\n');
	}
}
