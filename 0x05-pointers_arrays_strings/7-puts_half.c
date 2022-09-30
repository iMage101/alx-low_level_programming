#include "main.h"

/**
<<<<<<< HEAD
 * puts_half - Prints half of a string, followed by a new line
 * @str: The string
 */
void puts_half(char *str)
{
	int len = 0;
	int n;
	int isEven;

	while (str[len])
		len++;

	isEven = len % 2 == 0;
	n = (isEven ? len : len - 1) / 2;
	n += isEven ? 0 : 1;
	while (n < len)
	{
		_putchar(str[n]);
		n++;
=======
*puts_half - prints half of the string
*@str: input string to print
*Description: prints second half of string
*Return: nothing
*/

void puts_half(char *str)
{
	int i, j;

	i = 0;

	while (str[i] != '\0')
		i++;

	j = i / 2;

	if (i % 2 == 1)
		j++;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
	_putchar('\n');
}
