#include <stdio.h>
<<<<<<< HEAD

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
=======
/**
*main - writes 00 - 99
*Decription: Writes all unique combinations
*Return: zero for success
*/
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int main(void)
{
	int i, j;

	for (i = 0; i <= 99; i++)
	{
		for (j = 0; j <= 99; j++)
		{
<<<<<<< HEAD
			if (i < j && i != j)
=======
			if (i < j)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
<<<<<<< HEAD
=======

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
<<<<<<< HEAD

=======
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
