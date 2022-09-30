<<<<<<< HEAD
=======
#include <math.h>
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
<<<<<<< HEAD
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int myrand;
	int count;
	int total;

	srand(time(NULL));
	for (count = 0, total = 2772; total > 122; count++)
	{
		myrand = (rand() % 125) + 1;
		printf("%c", myrand);
		total -= myrand;
	}
	printf("%c", total);

=======
*main - Randomly generate pass
*Decription: Program to randomly generates password.
*Return: nothing
*/

int main(void)
{
	int pass, sum;

	srand(time(0));

	sum = 0;

	while (sum <= 2645)
	{
		pass = (rand() % 128);
		sum += pass;
		printf("%c", pass);
	}
	printf("%c", 2772 - sum);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
