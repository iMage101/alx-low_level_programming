#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
=======
#include <stdio.h>
#include <time.h>
/**
*main - Entry point, positive or negative, print sign of random number
*@void: Empty parameter list for main
*Decription: positive, zero and negative values
*Return: zero for success
*/
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
<<<<<<< HEAD
	printf("%d is %s\n", n, n == 0 ? "zero" : n < 0 ? "negative" : "positive");
=======

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
