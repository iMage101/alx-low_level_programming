#include <stdio.h>

/**
<<<<<<< HEAD
 * main - prints its name, followed by a new line.
 * @argc: argument count
 * @argv: arguments
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
=======
* main - prints name of file
* @argc: number of arguments
* @argv: arguments entered
* Description: print name of file
* Return: zero
*/

int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	argc = argc;

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	return (0);
}
