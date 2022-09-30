#include "main.h"

/**
<<<<<<< HEAD
 * _puts_recursion - prints a string, followed by a new line.
 * @s: the string
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(++s);
=======
* _puts_recursion - print string
* @s: string to print
* Description: print string using recursion
* Return: nothing
*/

void _puts_recursion(char *s)
{
	int i;

	i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(&s[i + 1]);
	}
	else
		_putchar('\n');
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
