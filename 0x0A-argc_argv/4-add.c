<<<<<<< HEAD
=======
#include "main.h"
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - adds positive numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, sum = 0;
	char *flag;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &flag, 10);
		if (*flag)
=======
* checkNum - verifies if string has only numbers
* @s: string to check
* Description: return 1 if only numbers in string, 0 if not
* Return: 1 if only numbers, 0 if not
*/

int checkNum(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
	}
	return (1);
}

/**
* main - find least amount of coins needed for change
* @argc: number of parameters entered
* @argv: strings entered including file name
* Description: prints the minimum number of coins to make change
* Return: zero
*/

int main(int argc, char **argv)
{
	int sum, i;

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (checkNum(argv[i]) == 0)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		{
			printf("Error\n");
			return (1);
		}
<<<<<<< HEAD
		else
		{
			sum += n;
		}
	}
	printf("%d\n", sum);

=======
		if (atoi(argv[i]) <= 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
