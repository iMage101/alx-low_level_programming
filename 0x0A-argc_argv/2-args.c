<<<<<<< HEAD
#include <stdio.h>

/**
 * main - prints all arguments it receives.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
=======
#include "main.h"
#include <stdio.h>

/**
* main - print all arguemnts
* @argc: number of arguments
* @argv: arguments entered
* Description: print all arguments including file name
* Return: zero
*/

int main(int argc, char *argv[])
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
<<<<<<< HEAD

=======
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
