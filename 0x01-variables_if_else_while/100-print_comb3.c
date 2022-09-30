#include <stdio.h>
/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = '0';
	int j = '0';

	while (i <= '9')
	{
		while (j <= '9')
		{
			if (!(i > j || i == j))
			{
				putchar(i);
				putchar(j);
				if (i == '8' && j == '9')
				{
					putchar('\n');
				}
				else
=======
*main - writes 00 - 99
*Decription: Writes all unique combinations
*Return: zero for success
*/
int main(void)
{
	int i, j;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			if ((i < j) & (j <= '9'))
			{
				putchar(i);
				putchar(j);
				if ((j < '9') | (i < '8'))
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
				{
					putchar(',');
					putchar(' ');
				}
			}
<<<<<<< HEAD
			j++;
		}
		j = '0';
		i++;
	}

=======
		}
	}
	putchar('\n');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
