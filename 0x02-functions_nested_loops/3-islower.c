#include "main.h"
<<<<<<< HEAD

/**
 * _islower - Checks for lowercase character
 * @c: The character to be checked
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
=======
/**
*_islower - returns 1 if char is lowercase
*@c: character to be checked if lower case, type int.
*Return: 1 if lower case, 0 otherwise.
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
		return (1);
	else
		return (0);
}
