<<<<<<< HEAD
=======
#include "main.h"
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
#include <stdio.h>
#include <stdlib.h>

/**
<<<<<<< HEAD
 * main - multiplies two numbers.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int x, y;

	if (argc < 3)
=======
* main - multiply two numbers
* @argc: number of arguments
* @argv: arguments entered
* Description: return product
* Return: zero
*/

int main(int argc, char *argv[])
{
	int num1, num2;
	char *s1 = argv[1];
	char *s2 = argv[2];

	num1 = num2 = 0;

	if (argc != 3)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	{
		printf("Error\n");
		return (1);
	}
<<<<<<< HEAD

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", x * y);

=======
	if (s1[0] == '-')
		num1 = -1 * atoi(&s1[1]);
	else
		num1 = atoi(&s1[0]);
	if (s2[0] == '-')
		num2 = -1 * atoi(&s2[1]);
	else
		num2 = atoi(&s2[0]);

	printf("%d\n", num1 * num2);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
