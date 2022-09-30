#include "main.h"
<<<<<<< HEAD

/**
 * print_alphabet_x10 - Prints the alphabet in lowercase 10 times,
 * followed by a newline
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	for (i = 0; i < 10; i++)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
=======
/**
*print_alphabet_x10 - prints 10 times the alphabet, in lowercase
*/
void print_alphabet_x10(void)
{
	int count;

	char i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		}
		_putchar('\n');
	}
}
