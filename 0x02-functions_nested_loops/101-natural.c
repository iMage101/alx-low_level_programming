<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 1;
	int total = 0;

	while (i < 1024)
	{
		if (i % 3 == 0)
			total += i;
		else if (i % 5 == 0)
			total += i;

		i++;
	}
	printf("%d\n", total);

=======
#include "main.h"
#include <stdio.h>
/**
*main - print sum of all multiples of 3 and 5 up to 1024
*@void: Empty parameter list for main
*Description: prints the sum of all multiples of 3 and 5
*up to but not including 1024
*Return: return 0
*/
int main(void)
{
	int sum, a;

	sum = 0;

	for (a = 1; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
		{
			sum += a;
		}
	}
	printf("%d\n", sum);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
