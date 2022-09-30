#include <stdio.h>

/**
<<<<<<< HEAD
* main - causes an infinite loop
* Return: 0
=======
*main - causes an infinite loop
*Return: 0
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
<<<<<<< HEAD
	i = 0;
	/*
	 * while (i < 10)
	 * {
	 *	putchar(i);
	 * }
	 */

=======

	i = 0;
	/**
	*while (i < 10)
	*{
	*	putchar(i);
	*}
	*/
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
