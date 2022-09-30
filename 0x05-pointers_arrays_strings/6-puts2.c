#include "main.h"

/**
<<<<<<< HEAD
 * puts2 - Prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: The string
 */
void puts2(char *str)
{
	int len = 0;
	int i = 0;

	while (str[len])
		len++;

	while (i < len)
	{
		_putchar(str[i]);
		i += 2;
=======
*puts2 - writes every other character
*@str: input string to print
*Description: prints every other character of string
*Return: nothing
*/

void puts2(char *str)
{
	int i, j;

	i = 0;
	j = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		_putchar(str[j]);
		j += 2;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
	_putchar('\n');
}
