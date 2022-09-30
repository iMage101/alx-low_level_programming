<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry block
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	printf("%lu, ", i);
	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

=======
#include "main.h"
#include <stdio.h>
/**
*main - print the first 50 fibonacci numbers
*Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
*Return: Nothing.
*/
int main(void)
{
	int count;

	unsigned long x, y, z;

	x = 0;
	y = 1;
	for (count = 1; count <= 49; count++)
	{
		z = x + y;
		x = y;
		y = z;
		printf("%lu, ", z);
	}
	printf("%lu\n", z + x);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
