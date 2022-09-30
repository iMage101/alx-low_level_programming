<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */
=======
#include "main.h"
#include <stdio.h>

/**
*main - Fizz-Buzz test
*Description: print numbers 1 -100 replacing multiples of 3 with Fizz
*multiples of 5 with Buzz, and multiples of both with FizzBuzz
*Return: zero
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int main(void)
{
	int i;

<<<<<<< HEAD
	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz");
		else if (i % 3 == 0)
			printf("Fizz");
		else if (i % 5 == 0)
			printf("Buzz");
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");

=======
	for (i = 1; i < 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	printf("Buzz\n");
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
