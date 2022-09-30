#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - Checks for a digit (0 through 9)
 * @c: The character to check
 *
 * Return: 1 if c is a digit. 0 otherwise
 */
=======
*_isdigit - checks if value a digit 0-9
*@c: int to be checked
*Return: 1 if c is a digit, otherwise 0
*/

>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
<<<<<<< HEAD

	return (0);
=======
	else
		return (0);
>>>>>>> b18eb04169674518d1b82fa305b0b818ef1b4f1e
}
