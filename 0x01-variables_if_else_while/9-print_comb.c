<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(44); /* comma */
			putchar(32); /* space */
		}
		i++;
	}
	putchar('\n');

=======
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- Writes 0-9
*Description: writes 0-9 with comma and space
*Return: zero on success
*/
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		if (num < 9)
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
