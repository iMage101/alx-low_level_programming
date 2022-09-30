<<<<<<< HEAD
#include<stdio.h>
#include<stdlib.h>

/**
 * main- Entry point
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int i, n;

=======
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int bytes, index;
	int (*address)(int, char **) = main;
	unsigned char opcode;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e

	if (argc != 2)
	{
		printf("Error\n");
<<<<<<< HEAD
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
=======
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	{
		printf("Error\n");
		exit(2);
	}

<<<<<<< HEAD
	for (i = 0; i < n; i++)
	{
		printf("%02hhx", *((char *)main + i));
		if (i < n - 1)
			printf(" ");
		else
			printf("\n");
	}

=======
	for (index = 0; index < bytes; index++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (index == bytes - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
