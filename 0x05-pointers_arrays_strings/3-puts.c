<<<<<<< HEAD
#include "main.h"

/**
 * _puts - Prints a string, followed by a new line, to stdout
 * @str: The string
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
=======
#include <stdio.h>
#include "main.h"

/**
*_puts - Prints the string
*@str: input string to print
*Description: Prints the string to stdout
*Return: nothing
*/

void _puts(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
	_putchar('\n');
}
