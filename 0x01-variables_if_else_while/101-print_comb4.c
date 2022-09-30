#include <stdio.h>

/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100; /* hundreds */
		k = (i / 10) % 10; /* tens */
		l = i % 10; /* singles */

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}
	}
	putchar('\n');

	return (0);
=======
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e, g, h, op1, op2;

i = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (h * 10) + g;
				op2 = (e * 10) + i;
				if (op1 < op2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
