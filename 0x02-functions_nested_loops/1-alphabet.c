#include "main.h"
<<<<<<< HEAD

/**
 * print_alphabet - Prints the alphabet in lowercase, followed by a newline
 */
void print_alphabet(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
=======
/**
*print_alphabet - Print the lowercase alphabet.
*/
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
	}
	_putchar('\n');
}
