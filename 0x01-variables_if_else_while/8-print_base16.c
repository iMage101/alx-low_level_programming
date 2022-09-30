<<<<<<< HEAD
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');

=======
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
*main- entry point
*Description: Alphabets
*Return: zero on success
*/
int main(void)
{
	char num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';

	while (num <= 'f')
	{
		putchar(num);
		num++;
	}
	putchar('\n');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
