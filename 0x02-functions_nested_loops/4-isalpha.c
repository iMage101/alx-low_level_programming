#include "main.h"
<<<<<<< HEAD

/**
 * _isalpha - Checks for alphabetic character
 * @c: The character to check
 *
 * Return: 1 if c is a letter, lowercase or uppercase. 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') ||
		(c >= 'a' && c <= 'z'))
=======
/**
*_isalpha - checks for alphabetic character.
*@c: character to be checked if alphabetic, type int
*Return: 1 if alphabetic, 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		return (1);
	else
		return (0);
}
