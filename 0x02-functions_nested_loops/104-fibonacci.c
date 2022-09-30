<<<<<<< HEAD
#include <stdio.h>
#define LARGEST 10000000000

/**
 * main - main block
 *
 * Return: 0 (Success)
 */
int main(void)
{
	unsigned long int fr1 = 0, bk1 = 1, fr2 = 0, bk2 = 2;
	unsigned long int hold1, hold2, hold3;
	int count;

	printf("%lu, %lu, ", bk1, bk2);
	for (count = 2; count < 98; count++)
	{
		if (bk1 + bk2 > LARGEST || fr2 > 0 || fr1 > 0)
		{
			hold1 = (bk1 + bk2) / LARGEST;
			hold2 = (bk1 + bk2) % LARGEST;
			hold3 = fr1 + fr2 + hold1;
			fr1 = fr2, fr2 = hold3;
			bk1 = bk2, bk2 = hold2;
			printf("%lu%010lu", fr2, bk2);
		}
		else
		{
			hold2 = bk1 + bk2;
			bk1 = bk2, bk2 = hold2;
			printf("%lu", bk2);
		}
		if (count != 97)
			printf(", ");
	}
	printf("\n");
=======
#include "main.h"
#include <stdio.h>
/**
*main - print the first 98 fibonacci numbers.
*Description: print the first 98 fibonacci numbers.
*Return: Nothing.
*/
int main(void)
{
	int count;
	unsigned long x, y, z, a, b, c, take;

	x = 0;
	y = 1;
	for (count = 1; count <= 90; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}

	a = x % 1000;
	x = x / 1000;
	b = y % 1000;
	y = y / 1000;

	while (count <= 98)
	{
		take = (a + b) / 1000;
		c = (a + b) - take * 1000;
		z = (x + y) + take;
		x = y;
		y = z;
		a = b;
		b = c;

		if (c >= 100)
			printf("%lu%lu", z, c);
		else
			printf("%lu0%lu", z, c);
		if (count < 98)
			printf(", ");
		count++;
	}
	putchar('\n');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
