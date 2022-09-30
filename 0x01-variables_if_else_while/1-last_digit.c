#include <stdlib.h>
<<<<<<< HEAD
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int lastDigit;
	char *resultEnd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;

	if (lastDigit == 0)
		resultEnd = "0";
	else if (lastDigit > 5)
		resultEnd = "greater than 5";
	else
		resultEnd = "less than 6 and not 0";

	printf("Last digit of %d is %d and is %s\n", n, lastDigit, resultEnd);
=======
#include <stdio.h>
#include <time.h>
/**
*main - Entry point
*Descirption: Last digits
*Return: zero on success
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	printf("Last digit of %d is %d ", n, (n % 10));

	if  ((n % 10) > 5)
	{
		printf("and is greater than 5\n");
	}
	else if ((n % 10) == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
