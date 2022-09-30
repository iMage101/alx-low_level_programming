<<<<<<< HEAD
=======
#include "main.h"
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - prints the min number of coins to make change
 * for an amount of money
 * @argc: argument count
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int total, count;
	unsigned int i;
	char *p;
	int cents[] = {25, 10, 5, 2};
=======
 * checkNum - verifies if string has only numbers
 * @s: string to check
 * Description: return 1 if only numbers in string, 0 if not
 * Return: 1 if only numbers, 0 if not
 **/

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
 **/

int main(int argc, char *argv[])
{
	int change, coins;
	char *input = argv[1];

	change = coins = 0;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

<<<<<<< HEAD
	total = strtol(argv[1], &p, 10);
	count = 0;

	if (!*p)
	{
		while (total > 1)
		{
			for (i = 0; i < sizeof(cents[i]); i++)
			{
				if (total >= cents[i])
				{
					count += total / cents[i];
					total = total % cents[i];
				}
			}
		}
		if (total == 1)
			count++;
	}
	else
=======
	change = atoi(input);

	if (change >= 0 && checkNum(input) == 0)
	{
		printf("Error\n");
		return (1);
	}
	if (change < 0 && checkNum(&input[1]) == 0)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	{
		printf("Error\n");
		return (1);
	}
<<<<<<< HEAD

	printf("%d\n", count);
=======
	if (change < 0)
	{
		change = 0;
	}
	coins = change / 25;
	change = change % 25;
	coins = coins + change / 10;
	change = change % 10;
	coins = coins + change / 5;
	change = change % 5;
	coins = coins + change / 2;
	change = change % 2;
	coins += change;
	printf("%d\n", coins);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
