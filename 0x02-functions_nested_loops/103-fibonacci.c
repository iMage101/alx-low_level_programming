<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 1, j = 2, total = 0;
	int k;

	while (j < 4000000)
	{
		if (j % 2 == 0)
			total += j;

		k = j;
		j += i;
		i = k;
	}
	printf("%d\n", total);
=======
#include "main.h"
#include <stdio.h>
/**
*main - print sum of all even fibonacci numbers under 4x10^6
*Description: main - print sum of all even fibonacci numbers under 4x10^6
*Return: Nothing.
*/
int main(void)
{
	unsigned long x, y, z, sum;

	z = 0;
	x = 0;
	y = 1;
	sum = 0;

	while (z < 4000000)
	{
		z = x + y;
		x = y;
		y = z;

		if (z % 2 == 0)
			sum += z;
	}
	printf("%lu\n", sum);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
