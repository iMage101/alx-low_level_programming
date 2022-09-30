<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int c;
	long num = 612852475143;

	for (c = (int) sqrt(num); c > 2; c++)
	{
		if (num % c == 0)
		{
			printf("%d\n", c);
			break;
		}
	}

=======
#include "main.h"
#include <stdio.h>

/**
*main - find prime number
*Description: The prime factors of 1231952 are 2, 2, 2, 2, 37 and 2081.
*Return: zero
*/

int main(void)
{
	long int x = 612852475143;

	long int count;

	for (count = 2; count < x; count++)
	{
		if (x % count == 0)
			x = x / count;
	}
	printf("%ld\n", count);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
