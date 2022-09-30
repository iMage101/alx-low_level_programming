#include "main.h"

/**
<<<<<<< HEAD
 * print_rev - Prints a string, in reverse, followed by a new line
 * @s: The string
 */
void print_rev(char *s)
{
	/* Figure out the length first */
	int len = 0;

	while (s[len])
		len++;

	/* Print backwards */
	while (--len >= 0)
		_putchar(s[len]);
=======
*print_rev - prints in reverse
*@s: string to reverse
*Description: prints string in reverse to stdout
*Return: nothing
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	_putchar('\n');
}
