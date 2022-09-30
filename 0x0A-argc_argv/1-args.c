<<<<<<< HEAD
#include <stdio.h>

/**
 * main - prints the number of arguments passed into it.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argv;

	printf("%d\n", argc - 1);
=======
#include "main.h"
#include <stdio.h>

/**
* main - print number of arguments entered
* @argc: number of arguments
* @argv: arguments entered
* Description: print number of arguments
* Return: return zero
*/

int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);
	argv = argv;

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
